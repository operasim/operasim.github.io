@echo on

ECHO Hello! OperaSIM %USERNAME%
ECHO xosc기반의 시나리오를 생성합니다.
CALL C:\anaconda3\Scripts\activate.bat
START conda activate vplan
CHDIR C:\Users\user\Downloads\vplan\project01\Project1\Project1\xosc
CALL python Acceleration_condition.py
CALL python catalog_example.py
CALL python CCRb.py
CALL python CCRm.py
CALL python CCRs.py
CALL python end_of_raod_reset_traffic.py
CALL python generate_from_main.py
CALL python generate_with_fixed_parameter_sets.py
CALL python generate_with_permutations.py
CALL python multi_conditional_and_triggers.py
CALL python multi_conditional_different_actions.py
CALL python multi_conditional_or_triggers.py
CALL python multiple_maneuvers.py
CALL python one_action_example.py
CALL python parallel_distance_actions.py
CALL python ParameterValueDistribution.py
CALL python route_in_crossing.py
CALL python Speed_condition.py
CALL python Stop_on_offroad.py
CALL python syncronize_straight_example.py
CALL python trajectory_example.py
CALL python withcontoller.py
CALL python generate_from_main_8lines.py
CALL python generate_from_main_6lines.py
CALL python generate_from_main_left2_right4_lines.py
CALL python CCRs_acc_30.py
CALL python CCRm_acc_30.py
CALL python CCRb_acc_30.py
