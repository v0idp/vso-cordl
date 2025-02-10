#pragma once
// IWYU pragma private; include "VROSC/DrawRectTransform.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(DrawRectTransform)
namespace UnityEngine {
class RectTransform;
}
// Forward declare root types
namespace VROSC {
class DrawRectTransform;
}
// Write type traits
MARK_REF_PTR_T(::VROSC::DrawRectTransform);
// Dependencies UnityEngine.MonoBehaviour
namespace VROSC {
// Is value type: false
// CS Name: VROSC.DrawRectTransform
class CORDL_TYPE DrawRectTransform : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field _rectTransform, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__rectTransform, put=__cordl_internal_set__rectTransform)) ::UnityW<::UnityEngine::RectTransform>  _rectTransform;

static inline ::VROSC::DrawRectTransform* New_ctor() ;

/// @brief Method OnDrawGizmos, addr 0x17a9ec4, size 0xd8, virtual false, abstract: false, final false
inline void OnDrawGizmos() ;

constexpr ::UnityW<::UnityEngine::RectTransform> const& __cordl_internal_get__rectTransform() const;

constexpr ::UnityW<::UnityEngine::RectTransform>& __cordl_internal_get__rectTransform() ;

constexpr void __cordl_internal_set__rectTransform(::UnityW<::UnityEngine::RectTransform>  value) ;

/// @brief Method .ctor, addr 0x17a9f9c, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr DrawRectTransform() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "DrawRectTransform", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
DrawRectTransform(DrawRectTransform && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "DrawRectTransform", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
DrawRectTransform(DrawRectTransform const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1407};

/// @brief Field _rectTransform, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::UnityEngine::RectTransform>  ____rectTransform;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::VROSC::DrawRectTransform, ____rectTransform) == 0x20, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::DrawRectTransform, 0x28>, "Size mismatch!");

} // namespace end def VROSC
NEED_NO_BOX(::VROSC::DrawRectTransform);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::DrawRectTransform*, "VROSC", "DrawRectTransform");
