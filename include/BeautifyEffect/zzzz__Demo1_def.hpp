#pragma once
// IWYU pragma private; include "BeautifyEffect/Demo1.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "UnityEngine/zzzz__Rect_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(Demo1)
namespace UnityEngine {
class GUIStyle;
}
// Forward declare root types
namespace BeautifyEffect {
class Demo1;
}
// Write type traits
MARK_REF_PTR_T(::BeautifyEffect::Demo1);
// Dependencies UnityEngine.MonoBehaviour, UnityEngine.Rect
namespace BeautifyEffect {
// Is value type: false
// CS Name: BeautifyEffect.Demo1
class CORDL_TYPE Demo1 : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field benchmarkEnabled, offset 0x24, size 0x1 
 __declspec(property(get=__cordl_internal_get_benchmarkEnabled, put=__cordl_internal_set_benchmarkEnabled)) bool  benchmarkEnabled;

/// @brief Field deltaTime, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get_deltaTime, put=__cordl_internal_set_deltaTime)) float_t  deltaTime;

/// @brief Field rect, offset 0x30, size 0x10 
 __declspec(property(get=__cordl_internal_get_rect, put=__cordl_internal_set_rect)) ::UnityEngine::Rect  rect;

/// @brief Field style, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_style, put=__cordl_internal_set_style)) ::UnityEngine::GUIStyle*  style;

static inline ::BeautifyEffect::Demo1* New_ctor() ;

/// @brief Method OnGUI, addr 0x180e518, size 0x1f4, virtual false, abstract: false, final false
inline void OnGUI() ;

/// @brief Method Update, addr 0x180e194, size 0x138, virtual false, abstract: false, final false
inline void Update() ;

/// @brief Method UpdateText, addr 0x180e428, size 0xc4, virtual false, abstract: false, final false
inline void UpdateText() ;

constexpr bool const& __cordl_internal_get_benchmarkEnabled() const;

constexpr bool& __cordl_internal_get_benchmarkEnabled() ;

constexpr float_t const& __cordl_internal_get_deltaTime() const;

constexpr float_t& __cordl_internal_get_deltaTime() ;

constexpr ::UnityEngine::Rect const& __cordl_internal_get_rect() const;

constexpr ::UnityEngine::Rect& __cordl_internal_get_rect() ;

constexpr ::UnityEngine::GUIStyle* const& __cordl_internal_get_style() const;

constexpr ::UnityEngine::GUIStyle*& __cordl_internal_get_style() ;

constexpr void __cordl_internal_set_benchmarkEnabled(bool  value) ;

constexpr void __cordl_internal_set_deltaTime(float_t  value) ;

constexpr void __cordl_internal_set_rect(::UnityEngine::Rect  value) ;

constexpr void __cordl_internal_set_style(::UnityEngine::GUIStyle*  value) ;

/// @brief Method .ctor, addr 0x180e70c, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Demo1() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Demo1", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
Demo1(Demo1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Demo1", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
Demo1(Demo1 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1833};

/// @brief Field deltaTime, offset: 0x20, size: 0x4, def value: None
 float_t  ___deltaTime;

/// @brief Field benchmarkEnabled, offset: 0x24, size: 0x1, def value: None
 bool  ___benchmarkEnabled;

/// @brief Field style, offset: 0x28, size: 0x8, def value: None
 ::UnityEngine::GUIStyle*  ___style;

/// @brief Field rect, offset: 0x30, size: 0x10, def value: None
 ::UnityEngine::Rect  ___rect;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::BeautifyEffect::Demo1, ___deltaTime) == 0x20, "Offset mismatch!");

static_assert(offsetof(::BeautifyEffect::Demo1, ___benchmarkEnabled) == 0x24, "Offset mismatch!");

static_assert(offsetof(::BeautifyEffect::Demo1, ___style) == 0x28, "Offset mismatch!");

static_assert(offsetof(::BeautifyEffect::Demo1, ___rect) == 0x30, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::BeautifyEffect::Demo1, 0x40>, "Size mismatch!");

} // namespace end def BeautifyEffect
NEED_NO_BOX(::BeautifyEffect::Demo1);
DEFINE_IL2CPP_ARG_TYPE(::BeautifyEffect::Demo1*, "BeautifyEffect", "Demo1");
