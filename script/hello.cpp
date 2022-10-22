#include <gazebo/gazebo.hh>

namespace gazebo{
class WorldPluginMyRobot : public WorldPlugin{

public: WorldPluginMyRobot(): WorldPlugin(){

    printf("hello my first robot world");
}


public: void Load(physics::WorldPtr _world,sdf::ElementPtr _sdf){

}
};


GZ_REGISTER_WORLD_PLUGIN(WorldPluginMyRobot)

}