#pragma once
// IWYU pragma private; include "VROSC/MatchOtherRectTransform.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(MatchOtherRectTransform)
namespace UnityEngine {
class RectTransform;
}
// Forward declare root types
namespace VROSC {
class MatchOtherRectTransform;
}
// Write type traits
MARK_REF_PTR_T(::VROSC::MatchOtherRectTransform);
// Dependencies UnityEngine.MonoBehaviour
namespace VROSC {
// Is value type: false
// CS Name: VROSC.MatchOtherRectTransform
class CORDL_TYPE MatchOtherRectTransform : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field _lastHeight, offset 0x34, size 0x4 
 __declspec(property(get=__cordl_internal_get__lastHeight, put=__cordl_internal_set__lastHeight)) float_t  _lastHeight;

/// @brief Field _lastWidth, offset 0x38, size 0x4 
 __declspec(property(get=__cordl_internal_get__lastWidth, put=__cordl_internal_set__lastWidth)) float_t  _lastWidth;

/// @brief Field _other, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__other, put=__cordl_internal_set__other)) ::UnityW<::UnityEngine::RectTransform>  _other;

/// @brief Field _rectTransform, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__rectTransform, put=__cordl_internal_set__rectTransform)) ::UnityW<::UnityEngine::RectTransform>  _rectTransform;

/// @brief Field _valid, offset 0x30, size 0x1 
 __declspec(property(get=__cordl_internal_get__valid, put=__cordl_internal_set__valid)) bool  _valid;

/// @brief Method GetValues, addr 0x17aa0f0, size 0xc8, virtual false, abstract: false, final false
inline void GetValues() ;

/// @brief Method LateUpdate, addr 0x17a9fa4, size 0x88, virtual false, abstract: false, final false
inline void LateUpdate() ;

static inline ::VROSC::MatchOtherRectTransform* New_ctor() ;

/// @brief Method UpdateSize, addr 0x17aa02c, size 0xc4, virtual false, abstract: false, final false
inline void UpdateSize(bool  force) ;

constexpr float_t const& __cordl_internal_get__lastHeight() const;

constexpr float_t& __cordl_internal_get__lastHeight() ;

constexpr float_t const& __cordl_internal_get__lastWidth() const;

constexpr float_t& __cordl_internal_get__lastWidth() ;

constexpr ::UnityW<::UnityEngine::RectTransform> const& __cordl_internal_get__other() const;

constexpr ::UnityW<::UnityEngine::RectTransform>& __cordl_internal_get__other() ;

constexpr ::UnityW<::UnityEngine::RectTransform> const& __cordl_internal_get__rectTransform() const;

constexpr ::UnityW<::UnityEngine::RectTransform>& __cordl_internal_get__rectTransform() ;

constexpr bool const& __cordl_internal_get__valid() const;

constexpr bool& __cordl_internal_get__valid() ;

constexpr void __cordl_internal_set__lastHeight(float_t  value) ;

constexpr void __cordl_internal_set__lastWidth(float_t  value) ;

constexpr void __cordl_internal_set__other(::UnityW<::UnityEngine::RectTransform>  value) ;

constexpr void __cordl_internal_set__rectTransform(::UnityW<::UnityEngine::RectTransform>  value) ;

constexpr void __cordl_internal_set__valid(bool  value) ;

/// @brief Method .ctor, addr 0x17aa1b8, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr MatchOtherRectTransform() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "MatchOtherRectTransform", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
MatchOtherRectTransform(MatchOtherRectTransform && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MatchOtherRectTransform", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
MatchOtherRectTransform(MatchOtherRectTransform const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1408};

/// @brief Field _other, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::UnityEngine::RectTransform>  ____other;

/// @brief Field _rectTransform, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::UnityEngine::RectTransform>  ____rectTransform;

/// @brief Field _valid, offset: 0x30, size: 0x1, def value: None
 bool  ____valid;

/// @brief Field _lastHeight, offset: 0x34, size: 0x4, def value: None
 float_t  ____lastHeight;

/// @brief Field _lastWidth, offset: 0x38, size: 0x4, def value: None
 float_t  ____lastWidth;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::VROSC::MatchOtherRectTransform, ____other) == 0x20, "Offset mismatch!");

static_assert(offsetof(::VROSC::MatchOtherRectTransform, ____rectTransform) == 0x28, "Offset mismatch!");

static_assert(offsetof(::VROSC::MatchOtherRectTransform, ____valid) == 0x30, "Offset mismatch!");

static_assert(offsetof(::VROSC::MatchOtherRectTransform, ____lastHeight) == 0x34, "Offset mismatch!");

static_assert(offsetof(::VROSC::MatchOtherRectTransform, ____lastWidth) == 0x38, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::MatchOtherRectTransform, 0x40>, "Size mismatch!");

} // namespace end def VROSC
NEED_NO_BOX(::VROSC::MatchOtherRectTransform);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::MatchOtherRectTransform*, "VROSC", "MatchOtherRectTransform");
