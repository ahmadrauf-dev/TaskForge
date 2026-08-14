#ifndef TASK_MANAGER_h
#define TASK_MANAGER_H
#include "task.h"
#include <iostream>
#include <vector>
#include <iomanip>
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
        
        // id should be maneged by system
        int temp_id = generate_id();
        std::string temp_title,temp_desription,temp_category;
        Priority temp_priority;
        std::tm temp_duedate;
        std::cout<<"Enter Title of task:\n";
        std::cin.ignore();std::getline(std::cin,temp_title);
        std::cout<<"Enter Description of task\n";
        std::cin.ignore();std::getline(std::cin,temp_desription);
        // std::cout<<"Enter the Priority of Task\n";std::cin>>temp_priority;
        std::cout<<"Enter task category\n";std::cin>>temp_category;
        // status should be manged by system imo 
        // defaultl should be sent to pending and
        // if its done it should change to done;
        std::cout<<"Enter the due date\n";
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