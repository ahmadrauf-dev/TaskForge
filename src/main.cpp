#include <iostream>
#include "task_manager.h"
using namespace std;


int main()
{
    bool is_menu_running = true;
    TaskManager task_manager;

    while(is_menu_running)
    {
        int usr_inp;
        cout<<"================================\n";
        cout<<"          TASKFORGE\n";
        cout<<"================================\n";
        cout<<"1.View Tasks\t2.Add task\n3.Remove Task\t4.Search Task\n5.Filter Task\t6.Sort Task\n7.EXIT\n";
        cin>>usr_inp;
        switch(usr_inp)
        {
            case 1:task_manager.view_task();break;
            case 2:task_manager.add_task();break;
            case 3:task_manager.remove_task();break;
            case 4:task_manager.search_task();break;
            case 5:task_manager.filter_task();break;
            case 6:task_manager.sort_task();break;
            case 7:is_menu_running = false;break;
            default:cout<<"Please Enter a Valid Selection!\n";
        }

    }


}