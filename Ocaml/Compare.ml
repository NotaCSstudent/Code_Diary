module Foo_and_bar : sig
        type t = { foo: int; bar: string }
        include Comparable.S with type t := t
      end = struct
        module T = struct
          type t = { foo: int; bar: string } with sexp
        end
include T
        include Comparable.Poly(T)
      end;;
