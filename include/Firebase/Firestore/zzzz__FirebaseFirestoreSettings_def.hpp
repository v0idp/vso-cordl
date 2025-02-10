#pragma once
// IWYU pragma private; include "Firebase/Firestore/FirebaseFirestoreSettings.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(FirebaseFirestoreSettings)
namespace Firebase::Firestore {
class FirestoreProxy;
}
namespace System::Threading {
class ReaderWriterLock;
}
namespace System {
template<typename TResult>
class Func_1;
}
// Forward declare root types
namespace Firebase::Firestore {
class FirebaseFirestoreSettings;
}
// Write type traits
MARK_REF_PTR_T(::Firebase::Firestore::FirebaseFirestoreSettings);
// Dependencies System.Object
namespace Firebase::Firestore {
// Is value type: false
// CS Name: Firebase.Firestore.FirebaseFirestoreSettings
class CORDL_TYPE FirebaseFirestoreSettings : public ::System::Object {
public:
// Declarations
 __declspec(property(get=get_CacheSizeBytes)) int64_t  CacheSizeBytes;

/// @brief Field CacheSizeUnlimited, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_CacheSizeUnlimited, put=setStaticF_CacheSizeUnlimited)) int64_t  CacheSizeUnlimited;

 __declspec(property(get=get_Host)) ::StringW  Host;

 __declspec(property(get=get_PersistenceEnabled)) bool  PersistenceEnabled;

 __declspec(property(get=get_SslEnabled)) bool  SslEnabled;

/// @brief Field _cacheSizeBytes, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get__cacheSizeBytes, put=__cordl_internal_set__cacheSizeBytes)) int64_t  _cacheSizeBytes;

/// @brief Field _firestoreProxy, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get__firestoreProxy, put=__cordl_internal_set__firestoreProxy)) ::Firebase::Firestore::FirestoreProxy*  _firestoreProxy;

/// @brief Field _host, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__host, put=__cordl_internal_set__host)) ::StringW  _host;

/// @brief Field _lock, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get__lock, put=__cordl_internal_set__lock)) ::System::Threading::ReaderWriterLock*  _lock;

/// @brief Field _persistenceEnabled, offset 0x29, size 0x1 
 __declspec(property(get=__cordl_internal_get__persistenceEnabled, put=__cordl_internal_set__persistenceEnabled)) bool  _persistenceEnabled;

/// @brief Field _sslEnabled, offset 0x28, size 0x1 
 __declspec(property(get=__cordl_internal_get__sslEnabled, put=__cordl_internal_set__sslEnabled)) bool  _sslEnabled;

/// @brief Method Dispose, addr 0x191a5b8, size 0x38, virtual false, abstract: false, final false
inline void Dispose() ;

/// @brief Method EnsureAppliedToFirestoreProxy, addr 0x191a850, size 0x164, virtual false, abstract: false, final false
inline void EnsureAppliedToFirestoreProxy() ;

static inline ::Firebase::Firestore::FirebaseFirestoreSettings* New_ctor(::Firebase::Firestore::FirestoreProxy*  firestoreProxy) ;

/// @brief Method ToString, addr 0x191a9b4, size 0x2fc, virtual true, abstract: false, final false
inline ::StringW ToString() ;

/// @brief Method WithReadLock, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
inline T WithReadLock(::System::Func_1<T>*  func) ;

constexpr int64_t const& __cordl_internal_get__cacheSizeBytes() const;

constexpr int64_t& __cordl_internal_get__cacheSizeBytes() ;

constexpr ::Firebase::Firestore::FirestoreProxy* const& __cordl_internal_get__firestoreProxy() const;

constexpr ::Firebase::Firestore::FirestoreProxy*& __cordl_internal_get__firestoreProxy() ;

constexpr ::StringW const& __cordl_internal_get__host() const;

constexpr ::StringW& __cordl_internal_get__host() ;

constexpr ::System::Threading::ReaderWriterLock* const& __cordl_internal_get__lock() const;

constexpr ::System::Threading::ReaderWriterLock*& __cordl_internal_get__lock() ;

constexpr bool const& __cordl_internal_get__persistenceEnabled() const;

constexpr bool& __cordl_internal_get__persistenceEnabled() ;

constexpr bool const& __cordl_internal_get__sslEnabled() const;

constexpr bool& __cordl_internal_get__sslEnabled() ;

constexpr void __cordl_internal_set__cacheSizeBytes(int64_t  value) ;

constexpr void __cordl_internal_set__firestoreProxy(::Firebase::Firestore::FirestoreProxy*  value) ;

constexpr void __cordl_internal_set__host(::StringW  value) ;

constexpr void __cordl_internal_set__lock(::System::Threading::ReaderWriterLock*  value) ;

constexpr void __cordl_internal_set__persistenceEnabled(bool  value) ;

constexpr void __cordl_internal_set__sslEnabled(bool  value) ;

/// @brief Method .ctor, addr 0x191a478, size 0x140, virtual false, abstract: false, final false
inline void _ctor(::Firebase::Firestore::FirestoreProxy*  firestoreProxy) ;

/// @brief Method <get_CacheSizeBytes>m__3, addr 0x191ad40, size 0x8, virtual false, abstract: false, final false
inline int64_t _get_CacheSizeBytes_m__3() ;

/// @brief Method <get_Host>m__0, addr 0x191ad28, size 0x8, virtual false, abstract: false, final false
inline ::StringW _get_Host_m__0() ;

/// @brief Method <get_PersistenceEnabled>m__2, addr 0x191ad38, size 0x8, virtual false, abstract: false, final false
inline bool _get_PersistenceEnabled_m__2() ;

/// @brief Method <get_SslEnabled>m__1, addr 0x191ad30, size 0x8, virtual false, abstract: false, final false
inline bool _get_SslEnabled_m__1() ;

static inline int64_t getStaticF_CacheSizeUnlimited() ;

/// @brief Method get_CacheSizeBytes, addr 0x191a7b8, size 0x98, virtual false, abstract: false, final false
inline int64_t get_CacheSizeBytes() ;

/// @brief Method get_Host, addr 0x191a5f0, size 0x98, virtual false, abstract: false, final false
inline ::StringW get_Host() ;

/// @brief Method get_PersistenceEnabled, addr 0x191a720, size 0x98, virtual false, abstract: false, final false
inline bool get_PersistenceEnabled() ;

/// @brief Method get_SslEnabled, addr 0x191a688, size 0x98, virtual false, abstract: false, final false
inline bool get_SslEnabled() ;

static inline void setStaticF_CacheSizeUnlimited(int64_t  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr FirebaseFirestoreSettings() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "FirebaseFirestoreSettings", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
FirebaseFirestoreSettings(FirebaseFirestoreSettings && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "FirebaseFirestoreSettings", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
FirebaseFirestoreSettings(FirebaseFirestoreSettings const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11209};

/// @brief Field _lock, offset: 0x10, size: 0x8, def value: None
 ::System::Threading::ReaderWriterLock*  ____lock;

/// @brief Field _firestoreProxy, offset: 0x18, size: 0x8, def value: None
 ::Firebase::Firestore::FirestoreProxy*  ____firestoreProxy;

/// @brief Field _host, offset: 0x20, size: 0x8, def value: None
 ::StringW  ____host;

/// @brief Field _sslEnabled, offset: 0x28, size: 0x1, def value: None
 bool  ____sslEnabled;

/// @brief Field _persistenceEnabled, offset: 0x29, size: 0x1, def value: None
 bool  ____persistenceEnabled;

/// @brief Field _cacheSizeBytes, offset: 0x30, size: 0x8, def value: None
 int64_t  ____cacheSizeBytes;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Firebase::Firestore::FirebaseFirestoreSettings, ____lock) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Firebase::Firestore::FirebaseFirestoreSettings, ____firestoreProxy) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Firebase::Firestore::FirebaseFirestoreSettings, ____host) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Firebase::Firestore::FirebaseFirestoreSettings, ____sslEnabled) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Firebase::Firestore::FirebaseFirestoreSettings, ____persistenceEnabled) == 0x29, "Offset mismatch!");

static_assert(offsetof(::Firebase::Firestore::FirebaseFirestoreSettings, ____cacheSizeBytes) == 0x30, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Firebase::Firestore::FirebaseFirestoreSettings, 0x38>, "Size mismatch!");

} // namespace end def Firebase::Firestore
NEED_NO_BOX(::Firebase::Firestore::FirebaseFirestoreSettings);
DEFINE_IL2CPP_ARG_TYPE(::Firebase::Firestore::FirebaseFirestoreSettings*, "Firebase.Firestore", "FirebaseFirestoreSettings");
