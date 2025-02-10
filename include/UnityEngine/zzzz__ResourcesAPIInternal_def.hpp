#pragma once
// IWYU pragma private; include "UnityEngine/ResourcesAPIInternal.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(ResourcesAPIInternal)
namespace System {
class Type;
}
namespace UnityEngine {
class Object;
}
namespace UnityEngine {
class Shader;
}
// Forward declare root types
namespace UnityEngine {
class ResourcesAPIInternal;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::ResourcesAPIInternal);
// Dependencies System.Object
namespace UnityEngine {
// Is value type: false
// CS Name: UnityEngine.ResourcesAPIInternal
class CORDL_TYPE ResourcesAPIInternal : public ::System::Object {
public:
// Declarations
/// @brief Method FindObjectsOfTypeAll, addr 0x2f86250, size 0x3c, virtual false, abstract: false, final false
static inline ::ArrayW<::UnityW<::UnityEngine::Object>,::Array<::UnityW<::UnityEngine::Object>>*> FindObjectsOfTypeAll(::System::Type*  type) ;

/// @brief Method FindShaderByName, addr 0x2f8628c, size 0x3c, virtual false, abstract: false, final false
static inline ::UnityW<::UnityEngine::Shader> FindShaderByName(::StringW  name) ;

/// @brief Method Load, addr 0x2f862c8, size 0x44, virtual false, abstract: false, final false
static inline ::UnityW<::UnityEngine::Object> Load(::StringW  path, ::System::Type*  systemTypeInstance) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ResourcesAPIInternal() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ResourcesAPIInternal", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
ResourcesAPIInternal(ResourcesAPIInternal && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ResourcesAPIInternal", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ResourcesAPIInternal(ResourcesAPIInternal const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{8552};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::ResourcesAPIInternal, 0x10>, "Size mismatch!");

} // namespace end def UnityEngine
NEED_NO_BOX(::UnityEngine::ResourcesAPIInternal);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ResourcesAPIInternal*, "UnityEngine", "ResourcesAPIInternal");
