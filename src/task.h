#ifndef TASK_H
#define TASK_H
#include <string>
#include <ctime>



enum class Priority
{
    HIGH,
    MEDIUM,
    LOW

};
enum class Status
{
    PENDING,
    IN_PROGRESS,
    COMPLETED
};
class Task
{
    friend class TaskManager;

    int task_id;
    std::string task_title;
    std::string task_description;
    Priority task_priority;
    std::string task_category;
    Status task_status;
    std::tm task_duedate;
    std::tm task_createdate;

    public:
    Task()
    {
        task_id=0;
        task_title = "";
        task_description = "";
        task_priority = Priority::MEDIUM;
        task_category = "";
        task_status = Status::PENDING;
        task_duedate = {};
        task_createdate = {};

    }

    Task(std::string inp_title,std::string inp_description, Priority inp_priority,std::string inp_category, std::tm inp_duedate)
    {
        // id and creation date will be controlled by teh system
        task_title = inp_title;
        task_description = inp_description;
        task_priority = inp_priority;
        task_category = inp_category;
        task_status = Status::PENDING;
        task_duedate = inp_duedate;
    }

    // getters :)
    int get_task_id()const{ return task_id;}
    std::string get_task_title() const{ return task_title;}
    std::string get_task_description() const{return task_description;}
    Priority get_task_priority() const {return task_priority;}
    std::string get_task_category() const {return task_category;}
    Status get_task_status() const { return task_status;}
    std::tm get_task_duedate() const { return task_duedate;}
    std::tm get_task_createdate() const { return task_createdate;}

    // now to place setters :)

    // void set_task_id(int inp_id){task_id = inp_id;}
    void set_task_title(std::string inp_title){task_title=inp_title;}
    void set_task_description(std::string inp_description){task_description=inp_description;}
    void set_task_priority(Priority inp_priority){task_priority=inp_priority;}
    void set_task_category(std::string inp_category){task_category=inp_category;}
    void set_task_status(Status inp_status){task_status=inp_status;}
    void set_task_duedate(std::tm inp_duedate){task_duedate=inp_duedate;}
    // void set_task_createdate(std::tm inp_crceatedate){task_createdate=inp_crceatedate;}
};

#endif