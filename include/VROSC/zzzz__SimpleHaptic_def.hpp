#pragma once
// IWYU pragma private; include "VROSC/SimpleHaptic.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(SimpleHaptic)
namespace VROSC {
struct HandType;
}
// Forward declare root types
namespace VROSC {
class SimpleHaptic;
}
// Write type traits
MARK_REF_PTR_T(::VROSC::SimpleHaptic);
// Dependencies System.Object
namespace VROSC {
// Is value type: false
// CS Name: VROSC.SimpleHaptic
class CORDL_TYPE SimpleHaptic : public ::System::Object {
public:
// Declarations
/// @brief Field _amplitude, offset 0x14, size 0x4 
 __declspec(property(get=__cordl_internal_get__amplitude, put=__cordl_internal_set__amplitude)) float_t  _amplitude;

/// @brief Field _frequency, offset 0x18, size 0x4 
 __declspec(property(get=__cordl_internal_get__frequency, put=__cordl_internal_set__frequency)) float_t  _frequency;

/// @brief Field _useHapticFeedBack, offset 0x10, size 0x1 
 __declspec(property(get=__cordl_internal_get__useHapticFeedBack, put=__cordl_internal_set__useHapticFeedBack)) bool  _useHapticFeedBack;

static inline ::VROSC::SimpleHaptic* New_ctor() ;

/// @brief Method Play, addr 0x1889f0c, size 0x9c, virtual false, abstract: false, final false
inline void Play(::VROSC::HandType  Hand, float_t  amplitudeMultiplier, float_t  frequencyMultiplier) ;

constexpr float_t const& __cordl_internal_get__amplitude() const;

constexpr float_t& __cordl_internal_get__amplitude() ;

constexpr float_t const& __cordl_internal_get__frequency() const;

constexpr float_t& __cordl_internal_get__frequency() ;

constexpr bool const& __cordl_internal_get__useHapticFeedBack() const;

constexpr bool& __cordl_internal_get__useHapticFeedBack() ;

constexpr void __cordl_internal_set__amplitude(float_t  value) ;

constexpr void __cordl_internal_set__frequency(float_t  value) ;

constexpr void __cordl_internal_set__useHapticFeedBack(bool  value) ;

/// @brief Method .ctor, addr 0x188a0ec, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SimpleHaptic() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SimpleHaptic", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
SimpleHaptic(SimpleHaptic && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SimpleHaptic", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
SimpleHaptic(SimpleHaptic const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{613};

/// @brief Field _useHapticFeedBack, offset: 0x10, size: 0x1, def value: None
 bool  ____useHapticFeedBack;

/// @brief Field _amplitude, offset: 0x14, size: 0x4, def value: None
 float_t  ____amplitude;

/// @brief Field _frequency, offset: 0x18, size: 0x4, def value: None
 float_t  ____frequency;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::VROSC::SimpleHaptic, ____useHapticFeedBack) == 0x10, "Offset mismatch!");

static_assert(offsetof(::VROSC::SimpleHaptic, ____amplitude) == 0x14, "Offset mismatch!");

static_assert(offsetof(::VROSC::SimpleHaptic, ____frequency) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::SimpleHaptic, 0x20>, "Size mismatch!");

} // namespace end def VROSC
NEED_NO_BOX(::VROSC::SimpleHaptic);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::SimpleHaptic*, "VROSC", "SimpleHaptic");
