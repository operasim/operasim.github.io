@echo on
CALL C:\anaconda3\Scripts\activate.bat
ECHO Hello! OperaSIM
CHDIR C:\Users\user\Downloads\vplan\project01\Project1\Project1\WindowsNoEditor
START CarlaUE4
PAUSE
CALL conda activate vplan03
START pip install -r requirements.txt
CHDIR C:\Users\user\Downloads\vplan\project01\Project1\Project1\WindowsNoEditor\PythonAPI\util
START python config.py --map 220713jbnu