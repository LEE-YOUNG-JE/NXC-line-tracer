# NXC-line-tracer
# NXC를 이용한 마인드스톰 프로그래밍
# 검정색 라인이 그려져 있는 도로가 주어지고 부착된 센서를 이용해서 길을 이탈하지 않고 장애물을 피하면서 완주하는 과제

# 마인드스톰의 주요 부품
# NXT
마인드스톰의 메인이 되는 부품이다. Brick들로 만든 로봇을 각 센서들에서 받아들인 정보를
토대로 NXT에서 컨트롤 한다. NXT 상부의 A, B, C 포트에는 모터를, 하부의 번호 포트에는
센서를 연결한다. 오렌지색 버튼은 전원/확인, 화살표 버튼은 메뉴선택, 어두운
회색 버튼은 취소와 뒤로 가기 기능을 담당한다.

# Sonic Sensor
물체와 센서 사이의 거리를 측정 할 수 있다. 255cm까지 가능하며 +/-3cm의 오차가 있을 수
있다. 주기적으로 신호를 받는다.

# Touch Sensor
물체의 색을 구별하는 센서이다. 흑백으로 색을 읽어 들이는 단점이 있지만 물체의 색이
비슷하지 않다면 어느 정도 구별 가능하다. 주기적으로 신호를 받는다.

# Sound Sensor
물체의 접촉을 감지하는 센서이다. Pressed, Released, Bumped(눌렀다가 뗌을 반복)을 구별하여
입력 받을 수 있다. 인터럽트로 신호가 들어오며 누른 회수를 측정 할 수도 있다. 소리를 감지하는 센서다. 감지한 소리의 크기를 dB 단위로 표현한다. 주기적으로 신호를 받는다.

# NXC란?
• C언어를 기반으로 NXT에 맞게 수정을 거친 언어이다.
• 개발 툴로 Bricx CC를 사용하며 C언어와 몇몇 명령어만 제외하면 크게 다르지 않기 때문에 C언어를 다룰 줄 아는 사람이라면 쉽게 사용할 수 있다.

