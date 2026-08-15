#ifndef TASK_MANAGER_h
#define TASK_MANAGER_H
#include "task.h"
#include <iostream>
#include <vector>
// #include <iomanip>
#include <fstream>

class TaskManager
{
    std::vector<Task> usr_tasks;
    
    public:
    void view_task()
    {

    }
    void add_task()
    {
        int usr_priority_inp;
        // id should be maneged by system
        int temp_id = generate_id();
        std::string temp_title,temp_desription,temp_category;
        Priority temp_priority;
        int temp_due_mm;
        int temp_due_dd;
        int temp_due_yy;
        std::tm temp_duedate = {};
        bool is_priority_loop_running = true;
        // title
        std::cout<<"Enter Title of task:\n";
        std::cin.ignore();std::getline(std::cin,temp_title);
        // task description
        std::cout<<"Enter Description of task\n";
        std::getline(std::cin,temp_desription);
        // priority -_-
        while(is_priority_loop_running)
        {
        std::cout<<"Enter task priority\n1.HIGH\n2.Medium\n3.LOW\n";
        std::cin>>usr_priority_inp;

        switch(usr_priority_inp)
        {
            case 1:temp_priority = Priority::HIGH;is_priority_loop_running = false;break;
            case 2:temp_priority = Priority::MEDIUM;is_priority_loop_running = false;break;
            case 3:temp_priority = Priority::LOW;is_priority_loop_running = false;break;
            default:std::cout<<"Please choose between 1 2 and 3\n";break;
        }
    }
        
        std::cout<<"Enter task category\n";
        std::cin.ignore();
        std::getline(std::cin,temp_category);
        // status should be manged by system imo 
        // defaultl should be sent to pending and
        // if its done it should change to done;
        std::cout<<"Enter the due date\nDAY DD:";std::cin>>temp_due_dd;
        std::cout<<"Month MM:";std::cin>>temp_due_mm;
        std::cout<<"Year YY:";std::cin>>temp_due_yy;
        temp_duedate.tm_mday = temp_due_dd;
        temp_duedate.tm_mon = temp_due_mm -1;
        temp_duedate.tm_year = temp_due_yy -1900;


        



    }
    void remove_task()
    {

    }
    void search_task()
    {

    }
    void filter_task()
    {

    }
    void sort_task()
    {

    }
    int generate_id()
    {
        int temp_id;
        std::fstream id_file("id_file.txt",std::ios::in);
        if(!id_file)
        {
            std::cout<<"Error accesing file\n";
            return 1;
        }
        id_file>>temp_id;
        temp_id++;
        return temp_id;

    }

};


#endif