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

    #Close connection
    con.close()

#Main 
create_zone()