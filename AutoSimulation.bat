@echo off
CALL C:\anaconda3\Scripts\activate.bat
ECHO Hello! OperaSIM
CHDIR C:\Users\user\Downloads\vplan\project01\Project1\Project1\WindowsNoEditor
CALL conda activate vplan03
START pip install -r requirements.txt
SET /P  width=시뮬레이터 창의 가로 사이즈를 입력해 주세요 :
SET /P  height=시뮬레이터 창의 세로 사이즈를 입력해 주세요 :
START CarlaUE4 -quality-level=Epic -world-port=2000 -resx=%width% -resy=%height%
ECHO 시뮬레이터가 정상구동 될때까지 기다려 주세요
PAUSE
CHDIR C:\Users\user\Downloads\vplan\project01\Project1\Project1\WindowsNoEditor\PythonAPI\util
START python config.py --map yeosuexpo
CHDIR C:\Users\user\Downloads\vplan\project01\Project1\Project1\WindowsNoEditor\PythonAPI\examples
START python automatic_control.py