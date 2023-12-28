#include <iostream>
using namespace std;
class Robot {
public:
    void moveForward() {
        // Implement code to move the robot forward
        std::cout << "Moving forward\n";
    }

    void turnLeft() {
        // Implement code to turn the robot left
        cout<< "Turning left\n";
    }

    void turnRight() {
        // Implement code to turn the robot right
       cout<<"Turning right\n";
    }
};

class ObstacleAvoidanceRobot : public Robot {
public:
    void followObstacles() {
        // Implement obstacle avoidance algorithm here
        // Use sensor data to detect obstacles
        bool obstacleDetected = checkObstacle();

        if (obstacleDetected) {
            // If an obstacle is detected, turn the robot
            turnLeft();
        } else {
            // If no obstacle, move forward
            moveForward();
        }
    }

private:
    bool checkObstacle() {
        // Implement code to check for obstacles using sensors
        // Return true if an obstacle is detected, false otherwise
        return false; // Replace with actual sensor data
    }
};

int main() {
    ObstacleAvoidanceRobot myRobot;

    // Run the robot's obstacle avoidance routine
    for (int i = 0; i < 10; ++i) {
        myRobot.followObstacles();
    }

    
    return 0;
}
        