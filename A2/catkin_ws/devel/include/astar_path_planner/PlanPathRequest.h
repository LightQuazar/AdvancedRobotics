// Generated by gencpp from file astar_path_planner/PlanPathRequest.msg
// DO NOT EDIT!


#ifndef ASTAR_PATH_PLANNER_MESSAGE_PLANPATHREQUEST_H
#define ASTAR_PATH_PLANNER_MESSAGE_PLANPATHREQUEST_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace astar_path_planner
{
template <class ContainerAllocator>
struct PlanPathRequest_
{
  typedef PlanPathRequest_<ContainerAllocator> Type;

  PlanPathRequest_()
    : diagonal_movement(false)
    , heuristic_cost_weight(0.0)  {
    }
  PlanPathRequest_(const ContainerAllocator& _alloc)
    : diagonal_movement(false)
    , heuristic_cost_weight(0.0)  {
  (void)_alloc;
    }



   typedef uint8_t _diagonal_movement_type;
  _diagonal_movement_type diagonal_movement;

   typedef double _heuristic_cost_weight_type;
  _heuristic_cost_weight_type heuristic_cost_weight;





  typedef boost::shared_ptr< ::astar_path_planner::PlanPathRequest_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::astar_path_planner::PlanPathRequest_<ContainerAllocator> const> ConstPtr;

}; // struct PlanPathRequest_

typedef ::astar_path_planner::PlanPathRequest_<std::allocator<void> > PlanPathRequest;

typedef boost::shared_ptr< ::astar_path_planner::PlanPathRequest > PlanPathRequestPtr;
typedef boost::shared_ptr< ::astar_path_planner::PlanPathRequest const> PlanPathRequestConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::astar_path_planner::PlanPathRequest_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::astar_path_planner::PlanPathRequest_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace astar_path_planner

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': True, 'IsMessage': True, 'HasHeader': False}
// {}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::astar_path_planner::PlanPathRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::astar_path_planner::PlanPathRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::astar_path_planner::PlanPathRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::astar_path_planner::PlanPathRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::astar_path_planner::PlanPathRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::astar_path_planner::PlanPathRequest_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::astar_path_planner::PlanPathRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "268bfe2029457d71986716aa0420efe4";
  }

  static const char* value(const ::astar_path_planner::PlanPathRequest_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x268bfe2029457d71ULL;
  static const uint64_t static_value2 = 0x986716aa0420efe4ULL;
};

template<class ContainerAllocator>
struct DataType< ::astar_path_planner::PlanPathRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "astar_path_planner/PlanPathRequest";
  }

  static const char* value(const ::astar_path_planner::PlanPathRequest_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::astar_path_planner::PlanPathRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "bool diagonal_movement\n"
"float64 heuristic_cost_weight\n"
;
  }

  static const char* value(const ::astar_path_planner::PlanPathRequest_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::astar_path_planner::PlanPathRequest_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.diagonal_movement);
      stream.next(m.heuristic_cost_weight);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct PlanPathRequest_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::astar_path_planner::PlanPathRequest_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::astar_path_planner::PlanPathRequest_<ContainerAllocator>& v)
  {
    s << indent << "diagonal_movement: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.diagonal_movement);
    s << indent << "heuristic_cost_weight: ";
    Printer<double>::stream(s, indent + "  ", v.heuristic_cost_weight);
  }
};

} // namespace message_operations
} // namespace ros

#endif // ASTAR_PATH_PLANNER_MESSAGE_PLANPATHREQUEST_H