# CASK

Archived / Deprecated / Etc. All the useful code has been rolled up into GRIM.

CASK is the Cycle-Accurate Simulator Kit, an intentionally-tiny set of core APIs
upon which device models may be implemented, and then may expect to interoperate
with one another in a sane way.

CASK defines the following:
* *Tickable* objects, for which the passage of time is meaningful,
* *IOTarget* objects, which may be the target of I/O transactions, which may be:
  * In 32-, 64-, or 128-bit widths,
  * of Read, Write, or Fetch varieties

CASK also contains an *EventQueue* object, but this admittedly doesn't fit the
ethos here and I'll probably find a better place for this. Really, some objects
just need to be able to call up to the governing simulator app. Perhaps this can
be done per-platform, with device models that have knowledge of whatever that
mechanism is.
