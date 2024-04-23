In singleton design pattern we will create single instance of the class
create only one object of the class
Examples - 
 ## DB Connections -
 Only one db connections should be used by all the modules of the server.## Configuration Manager -
 Entire project should have only one configuration manager.
 ## Logger
 Only one logger should be used so that all the logs can be stored in particular place.


 ## Solution 
 We have to make sure that only instance of logger is created
 - So we put a check if it's null only then we create the new logger otherwise we return the logger as it is.
- As it is not thread safe so we put lock outside it.
- As locks are really expensive we put a check outside that we put lock at first time.
 - Also make copy constructor and equal to overloading operator private.