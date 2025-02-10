#pragma once
// IWYU pragma private; include "Firebase/Storage/StorageProgress_1.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__IProgress_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(StorageProgress_1)
namespace Firebase::Storage {
template<typename T>
class StorageProgress_1__Report_c__AnonStorey0;
}
namespace System {
template<typename T>
class Action_1;
}
// Forward declare root types
namespace Firebase::Storage {
template<typename T>
class StorageProgress_1;
}
namespace Firebase::Storage {
template<typename T>
class StorageProgress_1__Report_c__AnonStorey0;
}
// Write type traits
MARK_GEN_REF_PTR_T(::Firebase::Storage::StorageProgress_1);
MARK_GEN_REF_PTR_T(::Firebase::Storage::StorageProgress_1__Report_c__AnonStorey0);
// Dependencies System.Object
namespace Firebase::Storage {
// cpp template
template<typename T>
// Is value type: false
// CS Name: Firebase.Storage.StorageProgress`1/<Report>c__AnonStorey0<T>
class CORDL_TYPE StorageProgress_1__Report_c__AnonStorey0 : public ::System::Object {
public:
// Declarations
/// @brief Field $this, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_$this, put=__cordl_internal_set_$this)) ::Firebase::Storage::StorageProgress_1<T>*  $this;

/// @brief Field value, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_value, put=__cordl_internal_set_value)) T  value;

static inline ::Firebase::Storage::StorageProgress_1__Report_c__AnonStorey0<T>* New_ctor() ;

constexpr ::Firebase::Storage::StorageProgress_1<T>* const& __cordl_internal_get_$this() const;

constexpr ::Firebase::Storage::StorageProgress_1<T>*& __cordl_internal_get_$this() ;

constexpr T const& __cordl_internal_get_value() const;

constexpr T& __cordl_internal_get_value() ;

constexpr void __cordl_internal_set_$this(::Firebase::Storage::StorageProgress_1<T>*  value) ;

constexpr void __cordl_internal_set_value(T  value) ;

/// @brief Method <>m__0, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void __m__0() ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr StorageProgress_1__Report_c__AnonStorey0() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "StorageProgress_1__Report_c__AnonStorey0", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
StorageProgress_1__Report_c__AnonStorey0(StorageProgress_1__Report_c__AnonStorey0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "StorageProgress_1__Report_c__AnonStorey0", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
StorageProgress_1__Report_c__AnonStorey0(StorageProgress_1__Report_c__AnonStorey0 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11703};

/// @brief Field value, offset: 0x10, size: 0x8, def value: None
 T  ___value;

/// @brief Field $this, offset: 0x18, size: 0x8, def value: None
 ::Firebase::Storage::StorageProgress_1<T>*  ___$this;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Firebase::Storage
// Dependencies System.IProgress`1<T>, System.Object
namespace Firebase::Storage {
// cpp template
template<typename T>
// Is value type: false
// CS Name: Firebase.Storage.StorageProgress`1<T>
class CORDL_TYPE StorageProgress_1 : public ::System::Object {
public:
// Declarations
using _Report_c__AnonStorey0 = ::Firebase::Storage::StorageProgress_1__Report_c__AnonStorey0<T>;

/// @brief Field reportCallback, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_reportCallback, put=__cordl_internal_set_reportCallback)) ::System::Action_1<T>*  reportCallback;

/// @brief Convert operator to "::System::IProgress_1<T>"
constexpr operator  ::System::IProgress_1<T>*() noexcept;

static inline ::Firebase::Storage::StorageProgress_1<T>* New_ctor(::System::Action_1<T>*  callback) ;

/// @brief Method Report, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void Report(T  value) ;

constexpr ::System::Action_1<T>* const& __cordl_internal_get_reportCallback() const;

constexpr ::System::Action_1<T>*& __cordl_internal_get_reportCallback() ;

constexpr void __cordl_internal_set_reportCallback(::System::Action_1<T>*  value) ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor(::System::Action_1<T>*  callback) ;

/// @brief Convert to "::System::IProgress_1<T>"
constexpr ::System::IProgress_1<T>* i___System__IProgress_1_T_() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr StorageProgress_1() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "StorageProgress_1", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
StorageProgress_1(StorageProgress_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "StorageProgress_1", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
StorageProgress_1(StorageProgress_1 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11704};

/// @brief Field reportCallback, offset: 0x10, size: 0x8, def value: None
 ::System::Action_1<T>*  ___reportCallback;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Firebase::Storage
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::Firebase::Storage::StorageProgress_1, "Firebase.Storage", "StorageProgress`1");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::Firebase::Storage::StorageProgress_1__Report_c__AnonStorey0, "Firebase.Storage", "StorageProgress`1/<Report>c__AnonStorey0");
