# Gedouble-SDK

**The open developer interface for Gedouble mods.**

Gedouble-SDK will provide the public C++ headers, API contracts, metadata formats, examples, and documentation needed to develop mods that target Gedouble-Core.

## Goals

- Stable, versioned C++ API.
- Clear compatibility rules for Gedouble-Core and Geometry Dash 2.2081.
- Mod metadata and dependency declarations.
- Lifecycle, logging, and safe access interfaces.
- Minimal examples and developer documentation.
- Support for Android ARM32 and ARM64 targets.

## Planned layout

```text
include/gedouble/   Public C++ headers
docs/               API and mod development guides
examples/           Small example mods
schemas/            Mod metadata schemas
```

## Development status

The SDK is at its initial scaffolding stage. The public API is not stable yet, and mods cannot be built against a finalized runtime contract.

## Related repositories

- [Gedouble launcher](https://github.com/Prism-GD/Gedouble)
- [Gedouble-Core](https://github.com/Prism-GD/Gedouble-core)

## License

A project license has not yet been selected. Until one is added, do not assume that the repository is licensed for reuse or redistribution.
