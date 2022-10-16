General Naming Rules
--------------------

1. class MyClass
2. filenames should be all lowercase and can include underscores or dashes. prefer '_'. examples:
   a. examples:
        A. my_useful_class.cc
        B. my-useful-class.cc
        C. myusefulclass.cc
        D. myusefulclass_test.cc // '_unittest' and '_regtest' are depreciated
   b. C++ files should end in .cc and header files should end in '.h'. Files that rely on being
      textually included at specific points should end in .inc (see "self-contained headers")
   c. do not use filenames that already exist in /usr/include, such as db.h
   d. make filenames very specific. For example:
        A. use 'http_server_logs.h' instead of 'logs.h'
3. Type Names::

   // classes and structs:
        A. class UrlTable {}
        B. class UrlTableTester {}
        C. struct UrlTableProperties {}
   // typedefs
        typedef hash_map<UrlTableProperties *, std::string> PropertiesMap;
   // using aliases
        using PropertiesMap = hash_map<UrlTableProperties *, std::string>;
   // enums
        enum class UrlTableError {} 
4.variable names are all lowercase with underscores. For example::
// int a_local_variable;
// int a_struct_data_member;
// int a_class_data_member_;
    a. do not use mixed case (i.e. camelCase)
5. Class Data members are just like regular variables but with a trailing underscore. Examples::
// class TableInfo {
        ...
        private:
                string table_name_; //OK - underscore at end.
} 
