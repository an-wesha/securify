# SECURIFY
## Your SMART Home Security System!
#### By Team Gryffindor!
#### Members: Anwesha Pradhan, Suchira Acharyya

### Brief:
Security is the main concern of every person, be it someone living in an apartment complex or someone living in their own house. 
Nowadays, people go out to work early in the morning and come home late at night, and the house is left unguarded for a long time. 
This increases the probability of thefts and breach of security.<p></p>
Therefore, we have come up with the idea of SECURIFY, a “smart” home security system, which will use electronic keypad-based smart locking system instead of traditional mechanical locks for homes which can be opened only with a correct password. Unauthorised access or entering the wrong password will trigger an alert message in the owner’s mobile phone thus making him aware that someone else is trying to enter his/her home without permission. 

Along with this, there will be a real time face recognition system, wherein, the owner will receive alerts when someone is at his/her door. The face recognition system will identify known people and notify the owner accordingly.

### Instructions to Use the Code:
#### 1. For the keypad operated door lock system using Arduino & IoT

#### 2. For the Real time facial recognition system using Computer Vision.
**Step 1:** Download all the remaining files in a single directory.

**Step 2:** Install the OpenCV package on your local system. (open command prompt and type "pip install opencv-python")

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


