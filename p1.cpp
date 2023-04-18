#include <iostream>
#include <string>
using namespace std;

int main()
{
    string symptoms;
    cout << "Please enter your symptoms (separated by commas): ";
    getline(cin, symptoms);

    if (symptoms.find("cough") != string::npos && symptoms.find("fever") != string::npos && symptoms.find("fatigue") != string::npos)
    {
        cout << "You may have the flu." << endl;
        cout << "You can take Benadryl allergy plus congestion tablet or ibuprofen tablet " << endl;
        cout << "You must consult healthcare professional if not cured at the earliest" << endl;
    }
    else if (symptoms.find("fever") != string::npos && symptoms.find("cough") != string::npos)
    {
        cout << "you may have common cold." << endl;
        cout << "You can take Benadryl allergy plus congestion tablet or ibuprofen tablet " << endl;
        cout << "You must consult healthcare professional if not cured at the earliest" << endl;
    }
    else if (symptoms.find("shortness of breath") != string::npos && symptoms.find("fatigue") != string::npos && symptoms.find("fever") != string::npos)
    {
        cout << "You may have COVID-19." << endl;
        cout << "You are required to contact the healthcare professional at the earliest  " << endl;
        cout << "You must isolate yourself from other people and wear mask while meeting the hospital staff" << endl;
    }
    else if (symptoms.find("chest pain") != string::npos && symptoms.find("shortness of breath") != string::npos && symptoms.find("fatigue") != string::npos)
    {
        cout << "You may have heart disease." << endl;
        cout << "Do you want to know more about heart attack :" << endl;
        string s1;
        cin >> s1;
        if (s1 == "yes" || s1 == "Yes")
        {
            cout << "Tests to diagnose a heart attack include:" << endl;
            cout << "Electrocardiogram (ECG or EKG), Blood tests, Coronary catheterization (angiogram),Cardiac CT or MRI" << endl;
            cout << "If you get positive test then consult the Doctor at the earliest " << endl;
        }
        else
        {
            cout << "Thank You for your time" << endl;
                }
    }
    else if (symptoms.find("abdominal pain") != string::npos && symptoms.find("nausea") != string::npos && symptoms.find("vomiting") != string::npos)
    {
        cout << "You may have gastroenteritis." << endl;
        cout << "You can tablets such as loperamide link (Imodium) and bismuth subsalicylate link" << endl;
        cout << "If ypu don't get comfort then consult the doctor" << endl;
    }
    else if (symptoms.find("joint pain") != string::npos && symptoms.find("fatigue") != string::npos && symptoms.find("fever") != string::npos)
    {
        cout << "You may have rheumatoid arthritis.This is the most common problem among the people of age above 30" << endl;
        cout << "This may include home treatment and clinical treatments" << endl;
        cout << "Home remedies like heat and cold massage over joints, exercising regularly and relaxing" << endl;
        cout << "For clinical treatment please consult the doctor because that will be given after few tests " << endl;
    }
    else if (symptoms.find("frequent urination") != string::npos && symptoms.find("increased thirst") != string::npos && symptoms.find("unexplained weight loss") != string::npos)
    {
        cout << "You may have diabetes." << endl;
        cout << "You should consult a healthcare professional for diagnosis and treatment." << endl;
    }
    else
    {
        cout << "We're sorry, we could not determine your disease based on your symptoms. Please consult a healthcare professional for more information." << endl;
    }

    return 0;
}
