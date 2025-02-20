std::vector<int> vec; 
vec.push_back(1); 
vec.push_back(2); 
vec.push_back(3); 

//Safe access using at(), throws exception if out of bounds
try { 
  int element = vec.at(1); // Accessing a valid element
  //int outOfBounds = vec.at(10); // This will throw an exception 
} catch (const std::out_of_range& oor) { 
  std::cerr << "Out of Range error: " << oor.what() << '\n'; 
}

//Another safe method: check size before accessing
if(vec.size() > 10) { 
  int element = vec[10]; 
} else { 
  std::cerr << "Index out of bounds\n";
}