#include "vex.h"

using namespace vex;

brain Brain;
controller conMain;
motor LFdrive = motor(PORT15, ratio18_1, false);
motor LBdrive = motor(PORT19, ratio18_1, false);
motor RFdrive = motor(PORT14, ratio18_1, true);
motor RBdrive = motor(PORT20, ratio18_1, true);
motor frontIntake = motor(PORT1, ratio18_1, true);
motor backIntake = motor(PORT1, ratio18_1, true);
motor flywheelTop = motor(PORT1, ratio6_1, true);
motor flywheelBottom = motor(PORT1, ratio6_1, true);
rotation odomL = rotation(PORT1, false);;
rotation odomR = rotation(PORT1, false);;
encoder odomM = encoder(Brain.ThreeWirePort.A);
inertial Inertial = inertial(PORT16);
pneumatics indexer = pneumatics(Brain.ThreeWirePort.H);

void vexcodeInit(void) {
}