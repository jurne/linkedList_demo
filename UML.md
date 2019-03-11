bull

- weight: int
- liftcapacity: int
- name: std::string

+ bull(weight: int, liftingCapacity: int, name: std::string)
+ to_string(): std::string

-------------------------------------------------

Node 

- data: Bull*
- next: Node*

Node(data: Bull*)

-----------------------------------------------------

LinkedList

+ get(index: int)
+ to_string()