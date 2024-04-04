'''comentario de bloque
Dev: CamilaRueda
Script descripction: Database configuration
'''
#1 Import database engine
import sqlite3

#2 Create database connection  (DB_NAME:weather)
con = sqlite3.connect('weather.db')

#3 Create cursor object => let us execute sql commands
cur=con.cursor()

#4 Create tables querys
zones_model_query='''
    CREATE TABLE IF NOT EXISTS zones(
        id INTEGER PRIMARY KEY ,
        name TEXT NOT NULL,
        address TEXT NOT NULL,
        gps_url TEXT NULL,
        description TEXT NULL,
        status BOOLEAN Default true,
        created_at TIMESTAMP DEFAULT (datetime('now','localtime')),
        update_at TIMESTAMP DEFAULT (datetime('now','localtime')),
        delete_at TIMESTAMP NULL
    );
    '''
sensors_model_query='''
    CREATE TABLE IF NOT EXISTS sensors(
        id INTEGER PRIMARY KEY,
        name TEXT NOT NULL,
        description TEXT NULL,
        datasheet_url TEXT NULL,
        stock_code TEXT NULL,
        status BOOLEAN Default true,
        created_at TIMESTAMP DEFAULT (datetime('now','localtime')),
        update_at TIMESTAMP DEFAULT (datetime('now','localtime')),
        delete_at TIMESTAMP NULL
    );
'''
#5 Execute queries
cur.execute(zones_model_query)
cur.execute(sensors_model_query)

#7 save changes in DB => Puash to database
con.commit()

#7 Close connection
#con.close()

