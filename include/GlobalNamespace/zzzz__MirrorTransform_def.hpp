#pragma once
// IWYU pragma private; include "GlobalNamespace/MirrorTransform.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(MirrorTransform)
namespace UnityEngine {
class Transform;
}
// Forward declare root types
namespace GlobalNamespace {
class MirrorTransform;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::MirrorTransform);
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: MirrorTransform
class CORDL_TYPE MirrorTransform : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field _mirror, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__mirror, put=__cordl_internal_set__mirror)) ::UnityW<::UnityEngine::Transform>  _mirror;

static inline ::GlobalNamespace::MirrorTransform* New_ctor() ;

/// @brief Method OnDrawGizmos, addr 0x16c53f4, size 0xf4, virtual false, abstract: false, final false
inline void OnDrawGizmos() ;

/// @brief Method Update, addr 0x16c5250, size 0x1a4, virtual false, abstract: false, final false
inline void Update() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get__mirror() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get__mirror() ;

constexpr void __cordl_internal_set__mirror(::UnityW<::UnityEngine::Transform>  value) ;

/// @brief Method .ctor, addr 0x16c54e8, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr MirrorTransform() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "MirrorTransform", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
MirrorTransform(MirrorTransform && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MirrorTransform", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
MirrorTransform(MirrorTransform const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{67};

/// @brief Field _mirror, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ____mirror;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::MirrorTransform, ____mirror) == 0x20, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::MirrorTransform, 0x28>, "Size mismatch!");

} // namespace end def GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::MirrorTransform);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MirrorTransform*, "", "MirrorTransform");
