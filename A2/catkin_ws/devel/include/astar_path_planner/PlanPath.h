// Generated by gencpp from file astar_path_planner/PlanPath.msg
// DO NOT EDIT!


#ifndef ASTAR_PATH_PLANNER_MESSAGE_PLANPATH_H
#define ASTAR_PATH_PLANNER_MESSAGE_PLANPATH_H

#include <ros/service_traits.h>


#include <astar_path_planner/PlanPathRequest.h>
#include <astar_path_planner/PlanPathResponse.h>


namespace astar_path_planner
{

struct PlanPath
{

typedef PlanPathRequest Request;
typedef PlanPathResponse Response;
Request request;
Response response;

typedef Request RequestType;
typedef Response ResponseType;

}; // struct PlanPath
} // namespace astar_path_planner


namespace ros
{
namespace service_traits
{


template<>
struct MD5Sum< ::astar_path_planner::PlanPath > {
  static const char* value()
  {
    return "64724dde033fbe8f19a82fd1a78b4bdc";
  }

  static const char* value(const ::astar_path_planner::PlanPath&) { return value(); }
};

template<>
struct DataType< ::astar_path_planner::PlanPath > {
  static const char* value()
  {
    return "astar_path_planner/PlanPath";
  }

  static const char* value(const ::astar_path_planner::PlanPath&) { return value(); }
};


// service_traits::MD5Sum< ::astar_path_planner::PlanPathRequest> should match 
// service_traits::MD5Sum< ::astar_path_planner::PlanPath > 
template<>
struct MD5Sum< ::astar_path_planner::PlanPathRequest>
{
  static const char* value()
  {
    return MD5Sum< ::astar_path_planner::PlanPath >::value();
  }
  static const char* value(const ::astar_path_planner::PlanPathRequest&)
  {
    return value();
  }
};

// service_traits::DataType< ::astar_path_planner::PlanPathRequest> should match 
// service_traits::DataType< ::astar_path_planner::PlanPath > 
template<>
struct DataType< ::astar_path_planner::PlanPathRequest>
{
  static const char* value()
  {
    return DataType< ::astar_path_planner::PlanPath >::value();
  }
  static const char* value(const ::astar_path_planner::PlanPathRequest&)
  {
    return value();
  }
};

// service_traits::MD5Sum< ::astar_path_planner::PlanPathResponse> should match 
// service_traits::MD5Sum< ::astar_path_planner::PlanPath > 
template<>
struct MD5Sum< ::astar_path_planner::PlanPathResponse>
{
  static const char* value()
  {
    return MD5Sum< ::astar_path_planner::PlanPath >::value();
  }
  static const char* value(const ::astar_path_planner::PlanPathResponse&)
  {
    return value();
  }
};

// service_traits::DataType< ::astar_path_planner::PlanPathResponse> should match 
// service_traits::DataType< ::astar_path_planner::PlanPath > 
template<>
struct DataType< ::astar_path_planner::PlanPathResponse>
{
  static const char* value()
  {
    return DataType< ::astar_path_planner::PlanPath >::value();
  }
  static const char* value(const ::astar_path_planner::PlanPathResponse&)
  {
    return value();
  }
};

} // namespace service_traits
} // namespace ros

#endif // ASTAR_PATH_PLANNER_MESSAGE_PLANPATH_H