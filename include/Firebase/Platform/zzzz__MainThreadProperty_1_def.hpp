#pragma once
// IWYU pragma private; include "Firebase/Platform/MainThreadProperty_1.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(MainThreadProperty_1)
namespace System {
template<typename TResult>
class Func_1;
}
// Forward declare root types
namespace Firebase::Platform {
template<typename T>
class MainThreadProperty_1;
}
// Write type traits
MARK_GEN_REF_PTR_T(::Firebase::Platform::MainThreadProperty_1);
// Dependencies System.Object
namespace Firebase::Platform {
// cpp template
template<typename T>
// Is value type: false
// CS Name: Firebase.Platform.MainThreadProperty`1<T>
class CORDL_TYPE MainThreadProperty_1 : public ::System::Object {
public:
// Declarations
 __declspec(property(get=get_Value)) T  Value;

/// @brief Field cachedValue, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_cachedValue, put=__cordl_internal_set_cachedValue)) T  cachedValue;

/// @brief Field getPropertyDelegate, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_getPropertyDelegate, put=__cordl_internal_set_getPropertyDelegate)) ::System::Func_1<T>*  getPropertyDelegate;

/// @brief Field lastGetPropertyTickCount, offset 0x18, size 0x4 
 __declspec(property(get=__cordl_internal_get_lastGetPropertyTickCount, put=__cordl_internal_set_lastGetPropertyTickCount)) int32_t  lastGetPropertyTickCount;

static inline ::Firebase::Platform::MainThreadProperty_1<T>* New_ctor(::System::Func_1<T>*  getPropertyDelegate) ;

constexpr T const& __cordl_internal_get_cachedValue() const;

constexpr T& __cordl_internal_get_cachedValue() ;

constexpr ::System::Func_1<T>* const& __cordl_internal_get_getPropertyDelegate() const;

constexpr ::System::Func_1<T>*& __cordl_internal_get_getPropertyDelegate() ;

constexpr int32_t const& __cordl_internal_get_lastGetPropertyTickCount() const;

constexpr int32_t& __cordl_internal_get_lastGetPropertyTickCount() ;

constexpr void __cordl_internal_set_cachedValue(T  value) ;

constexpr void __cordl_internal_set_getPropertyDelegate(::System::Func_1<T>*  value) ;

constexpr void __cordl_internal_set_lastGetPropertyTickCount(int32_t  value) ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor(::System::Func_1<T>*  getPropertyDelegate) ;

/// @brief Method <get_Value>m__0, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline T _get_Value_m__0() ;

/// @brief Method get_Value, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline T get_Value() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr MainThreadProperty_1() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "MainThreadProperty_1", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
MainThreadProperty_1(MainThreadProperty_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MainThreadProperty_1", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
MainThreadProperty_1(MainThreadProperty_1 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{12210};

/// @brief Field getPropertyDelegate, offset: 0x10, size: 0x8, def value: None
 ::System::Func_1<T>*  ___getPropertyDelegate;

/// @brief Field lastGetPropertyTickCount, offset: 0x18, size: 0x4, def value: None
 int32_t  ___lastGetPropertyTickCount;

/// @brief Field cachedValue, offset: 0x20, size: 0x8, def value: None
 T  ___cachedValue;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Firebase::Platform
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::Firebase::Platform::MainThreadProperty_1, "Firebase.Platform", "MainThreadProperty`1");
