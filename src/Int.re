type ordering = BsAbstract.Interface.ordering;

let eq = BsAbstract.Int.Eq.eq;

let compare: (int, int) => ordering = BsAbstract.Int.Ord.compare;

module Eq = BsAbstract.Int.Eq;

module Ord = BsAbstract.Int.Ord;

