#pragma once
// IWYU pragma private; include "VROSC/IntComparer.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "VROSC/zzzz__SignalFilter_def.hpp"
CORDL_MODULE_EXPORT(IntComparer)
namespace VROSC {
class IntField;
}
namespace VROSC {
class Signal;
}
// Forward declare root types
namespace VROSC {
class IntComparer;
}
// Write type traits
MARK_REF_PTR_T(::VROSC::IntComparer);
// Dependencies VROSC.SignalFilter
namespace VROSC {
// Is value type: false
// CS Name: VROSC.IntComparer
class CORDL_TYPE IntComparer : public ::VROSC::SignalFilter {
public:
// Declarations
/// @brief Field _intA, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get__intA, put=__cordl_internal_set__intA)) ::VROSC::IntField*  _intA;

/// @brief Field _intB, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get__intB, put=__cordl_internal_set__intB)) ::VROSC::IntField*  _intB;

/// @brief Method FilterSignal, addr 0x17216f4, size 0x48, virtual true, abstract: false, final false
inline void FilterSignal(::VROSC::Signal*  signal) ;

static inline ::VROSC::IntComparer* New_ctor() ;

constexpr ::VROSC::IntField* const& __cordl_internal_get__intA() const;

constexpr ::VROSC::IntField*& __cordl_internal_get__intA() ;

constexpr ::VROSC::IntField* const& __cordl_internal_get__intB() const;

constexpr ::VROSC::IntField*& __cordl_internal_get__intB() ;

constexpr void __cordl_internal_set__intA(::VROSC::IntField*  value) ;

constexpr void __cordl_internal_set__intB(::VROSC::IntField*  value) ;

/// @brief Method .ctor, addr 0x172173c, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr IntComparer() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "IntComparer", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
IntComparer(IntComparer && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "IntComparer", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
IntComparer(IntComparer const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{985};

/// @brief Field _intA, offset: 0x48, size: 0x8, def value: None
 ::VROSC::IntField*  ____intA;

/// @brief Field _intB, offset: 0x50, size: 0x8, def value: None
 ::VROSC::IntField*  ____intB;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::VROSC::IntComparer, ____intA) == 0x48, "Offset mismatch!");

static_assert(offsetof(::VROSC::IntComparer, ____intB) == 0x50, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::IntComparer, 0x58>, "Size mismatch!");

} // namespace end def VROSC
NEED_NO_BOX(::VROSC::IntComparer);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::IntComparer*, "VROSC", "IntComparer");
