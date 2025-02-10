#pragma once
// IWYU pragma private; include "BeautifyEffect/Demo2.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(Demo2)
// Forward declare root types
namespace BeautifyEffect {
class Demo2;
}
// Write type traits
MARK_REF_PTR_T(::BeautifyEffect::Demo2);
// Dependencies UnityEngine.MonoBehaviour
namespace BeautifyEffect {
// Is value type: false
// CS Name: BeautifyEffect.Demo2
class CORDL_TYPE Demo2 : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field demoMode, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get_demoMode, put=__cordl_internal_set_demoMode)) int32_t  demoMode;

static inline ::BeautifyEffect::Demo2* New_ctor() ;

/// @brief Method Start, addr 0x180e714, size 0x4, virtual false, abstract: false, final false
inline void Start() ;

/// @brief Method Update, addr 0x180ec34, size 0x60, virtual false, abstract: false, final false
inline void Update() ;

/// @brief Method UpdateDemoMode, addr 0x180e718, size 0x51c, virtual false, abstract: false, final false
inline void UpdateDemoMode() ;

constexpr int32_t const& __cordl_internal_get_demoMode() const;

constexpr int32_t& __cordl_internal_get_demoMode() ;

constexpr void __cordl_internal_set_demoMode(int32_t  value) ;

/// @brief Method .ctor, addr 0x180ee88, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Demo2() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Demo2", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
Demo2(Demo2 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Demo2", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
Demo2(Demo2 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1834};

/// @brief Field demoMode, offset: 0x20, size: 0x4, def value: None
 int32_t  ___demoMode;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::BeautifyEffect::Demo2, ___demoMode) == 0x20, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::BeautifyEffect::Demo2, 0x28>, "Size mismatch!");

} // namespace end def BeautifyEffect
NEED_NO_BOX(::BeautifyEffect::Demo2);
DEFINE_IL2CPP_ARG_TYPE(::BeautifyEffect::Demo2*, "BeautifyEffect", "Demo2");
