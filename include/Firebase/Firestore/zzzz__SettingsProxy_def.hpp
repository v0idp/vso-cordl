#pragma once
// IWYU pragma private; include "Firebase/Firestore/SettingsProxy.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Runtime/InteropServices/zzzz__HandleRef_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(SettingsProxy)
namespace System::Runtime::InteropServices {
struct HandleRef;
}
namespace System {
struct IntPtr;
}
// Forward declare root types
namespace Firebase::Firestore {
class SettingsProxy;
}
// Write type traits
MARK_REF_PTR_T(::Firebase::Firestore::SettingsProxy);
// Dependencies System.IDisposable, System.Object, System.Runtime.InteropServices.HandleRef
namespace Firebase::Firestore {
// Is value type: false
// CS Name: Firebase.Firestore.SettingsProxy
class CORDL_TYPE SettingsProxy : public ::System::Object {
public:
// Declarations
/// @brief Field kCacheSizeUnlimited, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_kCacheSizeUnlimited, put=setStaticF_kCacheSizeUnlimited)) int64_t  kCacheSizeUnlimited;

/// @brief Field swigCMemOwn, offset 0x20, size 0x1 
 __declspec(property(get=__cordl_internal_get_swigCMemOwn, put=__cordl_internal_set_swigCMemOwn)) bool  swigCMemOwn;

/// @brief Field swigCPtr, offset 0x10, size 0x10 
 __declspec(property(get=__cordl_internal_get_swigCPtr, put=__cordl_internal_set_swigCPtr)) ::System::Runtime::InteropServices::HandleRef  swigCPtr;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method Dispose, addr 0x1906704, size 0x19c, virtual true, abstract: false, final false
inline void Dispose() ;

/// @brief Method Finalize, addr 0x1906668, size 0x9c, virtual true, abstract: false, final false
inline void Finalize() ;

static inline ::Firebase::Firestore::SettingsProxy* New_ctor() ;

static inline ::Firebase::Firestore::SettingsProxy* New_ctor(::System::IntPtr  cPtr, bool  cMemoryOwn) ;

constexpr bool const& __cordl_internal_get_swigCMemOwn() const;

constexpr bool& __cordl_internal_get_swigCMemOwn() ;

constexpr ::System::Runtime::InteropServices::HandleRef const& __cordl_internal_get_swigCPtr() const;

constexpr ::System::Runtime::InteropServices::HandleRef& __cordl_internal_get_swigCPtr() ;

constexpr void __cordl_internal_set_swigCMemOwn(bool  value) ;

constexpr void __cordl_internal_set_swigCPtr(::System::Runtime::InteropServices::HandleRef  value) ;

/// @brief Method .ctor, addr 0x19065ac, size 0xbc, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method .ctor, addr 0x1905da8, size 0x54, virtual false, abstract: false, final false
inline void _ctor(::System::IntPtr  cPtr, bool  cMemoryOwn) ;

/// @brief Method cache_size_bytes, addr 0x1906a50, size 0x90, virtual false, abstract: false, final false
inline int64_t cache_size_bytes() ;

/// @brief Method getCPtr, addr 0x1905ecc, size 0x44, virtual false, abstract: false, final false
static inline ::System::Runtime::InteropServices::HandleRef getCPtr(::Firebase::Firestore::SettingsProxy*  obj) ;

static inline int64_t getStaticF_kCacheSizeUnlimited() ;

/// @brief Method host, addr 0x19068a0, size 0x90, virtual false, abstract: false, final false
inline ::StringW host() ;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

/// @brief Method is_persistence_enabled, addr 0x19069c0, size 0x90, virtual false, abstract: false, final false
inline bool is_persistence_enabled() ;

/// @brief Method is_ssl_enabled, addr 0x1906930, size 0x90, virtual false, abstract: false, final false
inline bool is_ssl_enabled() ;

static inline void setStaticF_kCacheSizeUnlimited(int64_t  value) ;

/// @brief Method set_cache_size_bytes, addr 0x1906ca8, size 0x98, virtual false, abstract: false, final false
inline void set_cache_size_bytes(int64_t  value) ;

/// @brief Method set_host, addr 0x1906ae0, size 0x98, virtual false, abstract: false, final false
inline void set_host(::StringW  host) ;

/// @brief Method set_persistence_enabled, addr 0x1906c10, size 0x98, virtual false, abstract: false, final false
inline void set_persistence_enabled(bool  enabled) ;

/// @brief Method set_ssl_enabled, addr 0x1906b78, size 0x98, virtual false, abstract: false, final false
inline void set_ssl_enabled(bool  enabled) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SettingsProxy() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SettingsProxy", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
SettingsProxy(SettingsProxy && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SettingsProxy", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
SettingsProxy(SettingsProxy const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11106};

/// @brief Field swigCPtr, offset: 0x10, size: 0x10, def value: None
 ::System::Runtime::InteropServices::HandleRef  ___swigCPtr;

/// @brief Field swigCMemOwn, offset: 0x20, size: 0x1, def value: None
 bool  ___swigCMemOwn;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Firebase::Firestore::SettingsProxy, ___swigCPtr) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Firebase::Firestore::SettingsProxy, ___swigCMemOwn) == 0x20, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Firebase::Firestore::SettingsProxy, 0x28>, "Size mismatch!");

} // namespace end def Firebase::Firestore
NEED_NO_BOX(::Firebase::Firestore::SettingsProxy);
DEFINE_IL2CPP_ARG_TYPE(::Firebase::Firestore::SettingsProxy*, "Firebase.Firestore", "SettingsProxy");
