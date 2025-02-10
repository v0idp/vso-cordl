#pragma once
// IWYU pragma private; include "UnityEngine/AssetBundle.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(AssetBundle)
namespace System {
class Type;
}
namespace UnityEngine {
class Object;
}
// Forward declare root types
namespace UnityEngine {
class AssetBundle;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::AssetBundle);
// Dependencies UnityEngine.Object
namespace UnityEngine {
// Is value type: false
// CS Name: UnityEngine.AssetBundle
class CORDL_TYPE AssetBundle : public ::UnityEngine::Object {
public:
// Declarations
/// @brief Method GetAllAssetNames, addr 0x2f570c0, size 0x3c, virtual false, abstract: false, final false
inline ::ArrayW<::StringW,::Array<::StringW>*> GetAllAssetNames() ;

/// @brief Method GetAllScenePaths, addr 0x2f570fc, size 0x3c, virtual false, abstract: false, final false
inline ::ArrayW<::StringW,::Array<::StringW>*> GetAllScenePaths() ;

/// @brief Method LoadAsset, addr 0x2f56e54, size 0x8c, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::Object> LoadAsset(::StringW  name) ;

/// @brief Method LoadAsset, addr 0x2f56ee0, size 0x148, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::Object> LoadAsset(::StringW  name, ::System::Type*  type) ;

/// @brief Method LoadAsset, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
inline T LoadAsset(::StringW  name) ;

/// @brief Method LoadAsset_Internal, addr 0x2f57028, size 0x54, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::Object> LoadAsset_Internal(::StringW  name, ::System::Type*  type) ;

/// @brief Method LoadFromFile, addr 0x2f56e10, size 0x44, virtual false, abstract: false, final false
static inline ::UnityW<::UnityEngine::AssetBundle> LoadFromFile(::StringW  path) ;

/// @brief Method LoadFromFile_Internal, addr 0x2f56dbc, size 0x54, virtual false, abstract: false, final false
static inline ::UnityW<::UnityEngine::AssetBundle> LoadFromFile_Internal(::StringW  path, uint32_t  crc, uint64_t  offset) ;

static inline ::UnityEngine::AssetBundle* New_ctor() ;

/// @brief Method Unload, addr 0x2f5707c, size 0x44, virtual false, abstract: false, final false
inline void Unload(bool  unloadAllLoadedObjects) ;

/// @brief Method .ctor, addr 0x2f56d64, size 0x58, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr AssetBundle() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "AssetBundle", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
AssetBundle(AssetBundle && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AssetBundle", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
AssetBundle(AssetBundle const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{12413};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::AssetBundle, 0x18>, "Size mismatch!");

} // namespace end def UnityEngine
NEED_NO_BOX(::UnityEngine::AssetBundle);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::AssetBundle*, "UnityEngine", "AssetBundle");
