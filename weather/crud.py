from database import con, cur
import os 

def create_zone():
    new_zone='''
    INSERT INTO zones 
        (name,address,gps_url,description)
    VALUES
        ('CESMAG','SEDECATAMBUCO','bbbb','ggggg')
    '''
    con.execute(new_zone)
    con.commit()

    print('New zones has been created successfully')

    
def list_zones():
    os.system('cls')
    query_list_zones='SELECT * FROM zones'
    cur.execute(query_list_zones)
    data = cur.fetchall()
    print(data)

#Main 
create_zone()
list_zones()
#Close connection
con.close()
