
#Honor Pledge: I pledge that I have neither given, nor received any help on this assignment.
#Ehtsham Nisar

JCC = javac
JFLAGS = -g
run: Driver.class Player.class
Driver.class: Driver.java
	$(JCC) $(JFLAGS) Driver.java
Player.class: Player.java
	$(JCC) $(JFLAGS) Player.java
clean:
	$(RM) *.class