#pragma once
// IWYU pragma private; include "Firebase/Firestore/GeoPointProxy.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Runtime/InteropServices/zzzz__HandleRef_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(GeoPointProxy)
namespace System::Runtime::InteropServices {
struct HandleRef;
}
namespace System {
struct IntPtr;
}
// Forward declare root types
namespace Firebase::Firestore {
class GeoPointProxy;
}
// Write type traits
MARK_REF_PTR_T(::Firebase::Firestore::GeoPointProxy);
// Dependencies System.IDisposable, System.Object, System.Runtime.InteropServices.HandleRef
namespace Firebase::Firestore {
// Is value type: false
// CS Name: Firebase.Firestore.GeoPointProxy
class CORDL_TYPE GeoPointProxy : public ::System::Object {
public:
// Declarations
/// @brief Field swigCMemOwn, offset 0x20, size 0x1 
 __declspec(property(get=__cordl_internal_get_swigCMemOwn, put=__cordl_internal_set_swigCMemOwn)) bool  swigCMemOwn;

/// @brief Field swigCPtr, offset 0x10, size 0x10 
 __declspec(property(get=__cordl_internal_get_swigCPtr, put=__cordl_internal_set_swigCPtr)) ::System::Runtime::InteropServices::HandleRef  swigCPtr;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method Dispose, addr 0x190d92c, size 0x19c, virtual true, abstract: false, final false
inline void Dispose() ;

/// @brief Method Finalize, addr 0x190d890, size 0x9c, virtual true, abstract: false, final false
inline void Finalize() ;

static inline ::Firebase::Firestore::GeoPointProxy* New_ctor(::System::IntPtr  cPtr, bool  cMemoryOwn) ;

static inline ::Firebase::Firestore::GeoPointProxy* New_ctor(double_t  latitude, double_t  longitude) ;

constexpr bool const& __cordl_internal_get_swigCMemOwn() const;

constexpr bool& __cordl_internal_get_swigCMemOwn() ;

constexpr ::System::Runtime::InteropServices::HandleRef const& __cordl_internal_get_swigCPtr() const;

constexpr ::System::Runtime::InteropServices::HandleRef& __cordl_internal_get_swigCPtr() ;

constexpr void __cordl_internal_set_swigCMemOwn(bool  value) ;

constexpr void __cordl_internal_set_swigCPtr(::System::Runtime::InteropServices::HandleRef  value) ;

/// @brief Method .ctor, addr 0x1909264, size 0x54, virtual false, abstract: false, final false
inline void _ctor(::System::IntPtr  cPtr, bool  cMemoryOwn) ;

/// @brief Method .ctor, addr 0x190d7bc, size 0xd4, virtual false, abstract: false, final false
inline void _ctor(double_t  latitude, double_t  longitude) ;

/// @brief Method getCPtr, addr 0x190898c, size 0x44, virtual false, abstract: false, final false
static inline ::System::Runtime::InteropServices::HandleRef getCPtr(::Firebase::Firestore::GeoPointProxy*  obj) ;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

/// @brief Method latitude, addr 0x190dac8, size 0x98, virtual false, abstract: false, final false
inline double_t latitude() ;

/// @brief Method longitude, addr 0x190db60, size 0x98, virtual false, abstract: false, final false
inline double_t longitude() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GeoPointProxy() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GeoPointProxy", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
GeoPointProxy(GeoPointProxy && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GeoPointProxy", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
GeoPointProxy(GeoPointProxy const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11132};

/// @brief Field swigCPtr, offset: 0x10, size: 0x10, def value: None
 ::System::Runtime::InteropServices::HandleRef  ___swigCPtr;

/// @brief Field swigCMemOwn, offset: 0x20, size: 0x1, def value: None
 bool  ___swigCMemOwn;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Firebase::Firestore::GeoPointProxy, ___swigCPtr) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Firebase::Firestore::GeoPointProxy, ___swigCMemOwn) == 0x20, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Firebase::Firestore::GeoPointProxy, 0x28>, "Size mismatch!");

} // namespace end def Firebase::Firestore
NEED_NO_BOX(::Firebase::Firestore::GeoPointProxy);
DEFINE_IL2CPP_ARG_TYPE(::Firebase::Firestore::GeoPointProxy*, "Firebase.Firestore", "GeoPointProxy");
