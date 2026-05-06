#include "setObj.h"

vector<Employee> setEmployees() 
{
    vector<Employee> employeeList;
    int add;

    while (true) 
    {
        cout << "\n1. Ажилчин нэмэх   0. Гарах" << endl;
        cout << "Сонголт: ";
        if (!(cin >> add)) {
            cin.clear(); cin.ignore(1000, '\n'); continue;
        }

        if (add == 0) break;
        
        if (add == 1) 
        {
            string name, ssNum, id, title, jobName, divName;
            int age;
            Date date;

            // --- Ажилтны үндсэн мэдээлэл ---
            cout << "\n--- Ажилтны мэдээлэл ---" << endl;
            cout << "Нэр: "; cin >> ws; getline(cin, name);
            cout << "Регистр: "; cin >> ssNum;
            cout << "Нас: "; cin >> age;
            cout << "Ажилтны ID: "; cin >> id;
            cout << "Албан тушаал: "; cin >> ws; getline(cin, title);
            cout << "Ажилд орсон он (ЖЖЖЖ СС ӨӨ): "; cin >> date.year >> date.month >> date.day;
            cout << "Хэлтэс: "; cin >> ws; getline(cin, divName);
            cout << "Мэргэжил: "; cin >> ws; getline(cin, jobName);

            Division div(divName);
            int jobCount;
            vector<JobDescription> tempJobs;
            cout << "Хэдэн ажлын тодорхойлолт нэмэх вэ? (Дор хаяж 1): "; cin >> jobCount;
            if (jobCount < 1) jobCount = 1; // 1..n шаардлага хангах

            for (int i = 0; i < jobCount; i++) {
                string jobName;
                cout << i + 1 << "-р мэргэжил: "; 
                cin >> ws; getline(cin, jobName);
                tempJobs.push_back(JobDescription(jobName));
            }
            // --- Гэр бүлийн хүний мэдээлэл авах ---
            char hasSpouse;
            Spouse spouse; // Хоосон объект
            cout << "Гэр бүлийн хүний мэдээлэл бүртгэх үү? (y/n): "; cin >> hasSpouse;
            if (hasSpouse == 'y' || hasSpouse == 'Y') {
                string sName, sSSNum;
                int sAge;
                Dates anniversary;
                cout << "Эхнэр/Нөхрийн нэр: "; cin >> ws; getline(cin, sName);
                cout << "Регистр: "; cin >> sSSNum;
                cout << "Нас: "; cin >> sAge;
                cout << "Гэрлэсэн огноо (ЖЖЖЖ СС ӨӨ): ";
                cin >> anniversary.year >> anniversary.month >> anniversary.day;
                spouse.setName(sName);
                spouse.setSSNum(sSSNum);
                spouse.setAge(sAge);
                spouse.setAnniversaryDate(anniversary);
                // Хэрэв Spouse-д гэрлэсэн огноо байдаг бол энд нэмж авна
            }

            // --- Хүүхдүүдийн мэдээлэл авах ---
            int childCount;
            vector<Child> tempChildren;
            cout << "Хэдэн хүүхэдтэй вэ? (Байхгүй бол 0): "; cin >> childCount;
            for (int i = 0; i < childCount; i++) {
                string cName, cSSNum, cToy;
                int cAge;
                cout << i + 1 << "-р хүүхдийн нэр: "; cin >> ws; getline(cin, cName);
                cout << "Регистр: "; cin >> cSSNum;
                cout << "Нас: "; cin >> cAge;
                cout << "Дуртай тоглоом: "; cin >> ws; getline(cin, cToy);
                
                Child child(cName, cSSNum, cAge, cToy);
                tempChildren.push_back(child);
            }

            // --- Employee объектыг байгуулах ---
            // Эхний хүүхдийг дамжуулах (таны байгуулагч 1 Child нэхэж байгаа тул)
            JobDescription firstJob = tempJobs[0];
            Child firstChild = tempChildren.empty() ? Child() : tempChildren[0];
            
            Employee employee(name, ssNum, age, id, title, date, firstJob, div, spouse, firstChild);

            // Бусад ажлын тодорхойлолтуудыг нэмэх
            for (size_t i = 1; i < tempJobs.size(); i++) {
                employee.setJobDescriptions(tempJobs[i]);
            }
            // Хэрэв 1-ээс олон хүүхэдтэй бол бусдыг нь нэмэх
            for (size_t i = 1; i < tempChildren.size(); i++) {
                employee.setChildren(tempChildren[i]);
            }

            employeeList.push_back(employee);
            cout << "\n--- Ажилтан амжилттай бүртгэгдлээ ---" << endl;
        }
    }
    return employeeList;
}