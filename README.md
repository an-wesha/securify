# SECURIFY
## Your SMART Home Security System!
#### By Team Gryffindor!
#### Members: Anwesha Pradhan, Suchira Acharyya

### Brief:
Security is the main concern of every person, be it someone living in an apartment complex or someone living in their own house. 
Nowadays, people go out to work early in the morning and come home late at night, and the house is left unguarded for a long time. 
This increases the probability of thefts and breach of security.<p></p>
Therefore, we have come up with the idea of SECURIFY, a “smart” home security system, which will use electronic keypad-based smart locking system instead of traditional mechanical locks for homes which can be opened only with a correct password. Unauthorised access or entering the wrong password will trigger an alarm, thus making people aware that someone is trying to enter the house without permission. 

Along with this, there will be a real time face recognition system, wherein, the owner will receive alerts when someone is at his/her door. The face recognition system will identify known people and notify the owner accordingly.

### Instructions:
#### 1. For the keypad operated door lock system and alarm using Arduino
**Step 1:** Download the SecurifyTest_.ino file.

**Step 2:** Make the circuit connection as follows
<img src="https://user-images.githubusercontent.com/83718705/127437962-680a89df-0ba1-4b53-a414-9636b469f7c3.png" width="700" height="450">


**Step 3:** Connect Arduino UNO board to the computer and upload the program to the Arduino UNO board. Make sure to select the correct board and port from the Arduino IDE. 

**Step 4:** If all the connections are  correct, then you should get the following result on lcd screen.
<img src="https://user-images.githubusercontent.com/83718705/127438097-cfeea82a-ac3c-436b-80a7-0f295a049c3b.png" width="700" height="450">

**Step 5:** Enter the password using the 4x4 keypad.

**Step 6:** If you enter the wrong password once, you get another chance to enter the correct password.
<img src="https://user-images.githubusercontent.com/83718705/127438322-6b3098ab-c73f-495b-80b0-c9da505d8cd5.png" width="700" height="450">

<img src="https://user-images.githubusercontent.com/83718705/127438380-4852d562-1118-4c09-97f3-8ac53833727b.png" width="700" height="450">

<img src="https://user-images.githubusercontent.com/83718705/127438424-74dd0b3f-bb8b-4fa7-b3ea-104b85547a90.png" width="700" height="450">

**Step 7:** If you enter wrong password twice, then an alarm will go off.
<img src="https://user-images.githubusercontent.com/83718705/127438500-4ca864d2-b423-4c91-a649-caff952ca111.png" width="700" height="450">

**Step 8:** On entering the correct password, the lock is unlocked, portrayed by the rotation of the servo motor in the circuit.
<img src="https://user-images.githubusercontent.com/83718705/127438629-45ebdf49-91fa-4378-b2a1-a6bee717a30f.png" width="700" height="450">

#### 2. For the PIR based motion sensors.

**Step 1:** Download the Securify_MotionSensor.ino file.

**Step 2:** Make the circuit connection as follows
![image](https://user-images.githubusercontent.com/83718705/127744724-58de1baf-8e33-43be-9f95-e84ad2e81b87.png)

**Step 3:** Connect Arduino UNO board to the computer and upload the program to the Arduino UNO board. Make sure to select the correct board and port from the Arduino IDE.

**Step 4:** Whenever motion is detected the buzzer goes off signifying that a burglar is trying to enter.
![image](https://user-images.githubusercontent.com/83718705/127744771-4ca265af-e3e6-44b2-a3d8-a1436516c7b8.png)


#### 3. For the Real time facial recognition system using Computer Vision.
**Step 1:** Download all the remaining files in a single directory.

**Step 2:** Install the OpenCV package on your local system. (open command prompt and type "pip install opencv-python" or "pip install opencv-contrib-python")

**Step 3:** Open collectData.py on your local IDE. Create a folder in the same directory as that of your file and name it as "data". Now execute the code.

Note: If you want to add the data of one more person, then do the following changes:
![image](https://user-images.githubusercontent.com/68744661/127274407-50ac8666-f71d-4f0e-a49b-1d0cfd8cced3.png)


**Step 4:** A window capturing video from your webcam will open. Look into the webcam and make sure that your face is being detected. (a blue rectangle will be formed around your face)

**Step 5:** After a few seconds, press 'q' to close the window. Your facial data has been stored in the data folder.

**Step 6:** Next, install the packages Numpy and Pillow on your system (pip install numpy, pip install pillow).

**Step 7:** Now open and run classifier.py on your IDE. A new "classifier.yml" file will be created in the same directory.

**Step 8:** Now open an account on Sinch and navigate to the Getting Started section in the SMS section. Enter your number in the "Send Message To" box and copy the service plan id nad api token number that has been generated on your account.
![image](https://user-images.githubusercontent.com/68744661/127270120-b757ed65-a00a-474f-8899-a948894f5316.png)


**Step 9:** Now install the Python SDK for the CLX Communications REST API & Request on your system (pip install clx-sdk-xms, pip install requests).

**Step 10:** Open recognize.py on your IDE and make the following changes:
![image](https://user-images.githubusercontent.com/68744661/127271163-0163e907-7220-479b-9153-55bd4472c259.png)


![image](https://user-images.githubusercontent.com/68744661/127271350-eb2fe068-b587-424a-bd8f-fd88b9bf4098.png)

**Step 11:** Now execute the code to get the final result.

<img src="https://user-images.githubusercontent.com/68744661/127272367-32cbfde4-0b69-41b5-8926-fb033b5f823b.png" width="400" height="400"> <img src="https://user-images.githubusercontent.com/68744661/127272832-fae25c61-c7de-4bf3-8da4-8128dd7603ae.jpg" width="200" height="400"> 

<img src="https://user-images.githubusercontent.com/68744661/127604986-619a6c7f-223d-4bc2-80a4-6849f4633939.png" width="400" height="400"> <img src="https://user-images.githubusercontent.com/68744661/127605325-70d316d0-0b34-400a-a037-5fea198fa0ed.jpeg" width="200" height="400"> 



### THANK YOU!
