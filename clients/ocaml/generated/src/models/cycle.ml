(*
 * This file has been generated by the OCamlClientCodegen generator for openapi-generator.
 *
 * Generated by: https://openapi-generator.tech
 *
 * Schema Cycle.t : Details of a single release cycle of a given product. There might be some slight variations to this depending on the product.
 *)

type t = {
    (* Release Cycle *)
    cycle: Any_type.t option [@default None];
    (* Release Date for the first release in this cycle *)
    release_date: Any_type.t option [@default None];
    (* End of Life Date for this release cycle *)
    eol: Any_type.t option [@default None];
    (* Latest release in this cycle *)
    latest: Any_type.t option [@default None];
    (* Link to changelog for the latest release, if available *)
    link: Any_type.t option [@default None];
    (* Whether this release cycle has long-term-support (LTS). Can be a date instead in YYYY-MM-DD format as well if the release enters LTS status on a given date.  *)
    lts: Any_type.t option [@default None];
    (* Whether this release cycle has active support *)
    support: Any_type.t option [@default None];
    (* Whether this cycle is now discontinued. *)
    discontinued: Any_type.t option [@default None];
} [@@deriving yojson { strict = false }, show ];;

(** Details of a single release cycle of a given product. There might be some slight variations to this depending on the product. *)
let create () : t = {
    cycle = None;
    release_date = None;
    eol = None;
    latest = None;
    link = None;
    lts = None;
    support = None;
    discontinued = None;
}

