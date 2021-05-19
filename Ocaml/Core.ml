open Core.Std
type t = int String.Map.t
let empty = String.Map.empty let to_list t = Map.to_alist t
lettouchts= let count =
match Map.find t s with |None->0 |Somex->x
in
Map.add t ~key:s ~data:(count + 1)
