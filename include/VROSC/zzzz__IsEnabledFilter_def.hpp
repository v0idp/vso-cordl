#pragma once
// IWYU pragma private; include "VROSC/IsEnabledFilter.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "VROSC/zzzz__SignalFilter_def.hpp"
CORDL_MODULE_EXPORT(IsEnabledFilter)
namespace UnityEngine {
class MonoBehaviour;
}
namespace VROSC {
class Signal;
}
// Forward declare root types
namespace VROSC {
class IsEnabledFilter;
}
// Write type traits
MARK_REF_PTR_T(::VROSC::IsEnabledFilter);
// Dependencies VROSC.SignalFilter
namespace VROSC {
// Is value type: false
// CS Name: VROSC.IsEnabledFilter
class CORDL_TYPE IsEnabledFilter : public ::VROSC::SignalFilter {
public:
// Declarations
/// @brief Field _enablableToCheck, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get__enablableToCheck, put=__cordl_internal_set__enablableToCheck)) ::UnityW<::UnityEngine::MonoBehaviour>  _enablableToCheck;

/// @brief Field _passOnFalse, offset 0x50, size 0x1 
 __declspec(property(get=__cordl_internal_get__passOnFalse, put=__cordl_internal_set__passOnFalse)) bool  _passOnFalse;

/// @brief Method FilterSignal, addr 0x1721820, size 0xd8, virtual true, abstract: false, final false
inline void FilterSignal(::VROSC::Signal*  signal) ;

static inline ::VROSC::IsEnabledFilter* New_ctor() ;

constexpr ::UnityW<::UnityEngine::MonoBehaviour> const& __cordl_internal_get__enablableToCheck() const;

constexpr ::UnityW<::UnityEngine::MonoBehaviour>& __cordl_internal_get__enablableToCheck() ;

constexpr bool const& __cordl_internal_get__passOnFalse() const;

constexpr bool& __cordl_internal_get__passOnFalse() ;

constexpr void __cordl_internal_set__enablableToCheck(::UnityW<::UnityEngine::MonoBehaviour>  value) ;

constexpr void __cordl_internal_set__passOnFalse(bool  value) ;

/// @brief Method .ctor, addr 0x17218f8, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr IsEnabledFilter() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "IsEnabledFilter", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
IsEnabledFilter(IsEnabledFilter && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "IsEnabledFilter", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
IsEnabledFilter(IsEnabledFilter const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{987};

/// @brief Field _enablableToCheck, offset: 0x48, size: 0x8, def value: None
 ::UnityW<::UnityEngine::MonoBehaviour>  ____enablableToCheck;

/// @brief Field _passOnFalse, offset: 0x50, size: 0x1, def value: None
 bool  ____passOnFalse;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::VROSC::IsEnabledFilter, ____enablableToCheck) == 0x48, "Offset mismatch!");

static_assert(offsetof(::VROSC::IsEnabledFilter, ____passOnFalse) == 0x50, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::IsEnabledFilter, 0x58>, "Size mismatch!");

} // namespace end def VROSC
NEED_NO_BOX(::VROSC::IsEnabledFilter);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::IsEnabledFilter*, "VROSC", "IsEnabledFilter");
