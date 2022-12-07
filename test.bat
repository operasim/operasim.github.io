@echo on
ECHO Hello! OperaSIM
CALL C:\anaconda3\Scripts\activate.bat
START conda activate vplan01
CHDIR WindowsNoEditor
START pip install -r requirements.txt
CALL python automatic_control.py
PAUSE