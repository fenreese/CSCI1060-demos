#include <iostream>

using namespace std;

class Agent {
    private:
        string name;
        string role;
        bool isUnlockable;
        int agentID;
    public: 
        Agent();
        ~Agent();

        string toString();

        void setName(string newName);
        string getName();
};   

Agent::Agent() {
    cout << "Creating new agent..." << endl;

    // harbor, but leaked
    name = "Mage";
    role = "Controller";
    isUnlockable = true;
    agentID = 20;
}

Agent::~Agent() {
    cout << "Getting rid of agent..." << endl;
}

string Agent::toString() {
    return "Name: " + name + " (Agent #" + to_string(agentID) + ")\n" +
           "Role: " + role + "\n" +
           "Unlockable?: " + to_string(isUnlockable) + "\n";
}

void Agent::setName(string newName) {
    name = newName;
}

string Agent::getName() {
    return name;
}

int main() {
    Agent harbor = Agent();

    cout << "Info for variable harbor:" << endl;
    cout << harbor.toString() << endl;

    harbor.setName("Harbor");
    cout << "Variable harbor's name changed to " << harbor.getName() << endl;
    cout << "New info for variable harbor:" << endl;
    cout << harbor.toString() << endl;   
}