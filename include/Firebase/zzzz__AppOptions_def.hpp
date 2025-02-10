#pragma once
// IWYU pragma private; include "Firebase/AppOptions.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(AppOptions)
namespace Firebase {
class AppOptionsInternal;
}
namespace System {
class Uri;
}
// Forward declare root types
namespace Firebase {
class AppOptions;
}
// Write type traits
MARK_REF_PTR_T(::Firebase::AppOptions);
// Dependencies System.IDisposable, System.Object
namespace Firebase {
// Is value type: false
// CS Name: Firebase.AppOptions
class CORDL_TYPE AppOptions : public ::System::Object {
public:
// Declarations
 __declspec(property(put=set_ApiKey)) ::StringW  ApiKey;

 __declspec(property(put=set_AppId)) ::StringW  AppId;

 __declspec(property(put=set_DatabaseUrl)) ::System::Uri*  DatabaseUrl;

 __declspec(property(put=set_MessageSenderId)) ::StringW  MessageSenderId;

 __declspec(property(put=set_PackageName)) ::StringW  PackageName;

 __declspec(property(put=set_ProjectId)) ::StringW  ProjectId;

 __declspec(property(get=get_StorageBucket, put=set_StorageBucket)) ::StringW  StorageBucket;

/// @brief Field <ApiKey>k__BackingField, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__ApiKey_k__BackingField, put=__cordl_internal_set__ApiKey_k__BackingField)) ::StringW  _ApiKey_k__BackingField;

/// @brief Field <AppId>k__BackingField, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get__AppId_k__BackingField, put=__cordl_internal_set__AppId_k__BackingField)) ::StringW  _AppId_k__BackingField;

/// @brief Field <DatabaseUrl>k__BackingField, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get__DatabaseUrl_k__BackingField, put=__cordl_internal_set__DatabaseUrl_k__BackingField)) ::System::Uri*  _DatabaseUrl_k__BackingField;

/// @brief Field <MessageSenderId>k__BackingField, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__MessageSenderId_k__BackingField, put=__cordl_internal_set__MessageSenderId_k__BackingField)) ::StringW  _MessageSenderId_k__BackingField;

/// @brief Field <PackageName>k__BackingField, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get__PackageName_k__BackingField, put=__cordl_internal_set__PackageName_k__BackingField)) ::StringW  _PackageName_k__BackingField;

/// @brief Field <ProjectId>k__BackingField, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get__ProjectId_k__BackingField, put=__cordl_internal_set__ProjectId_k__BackingField)) ::StringW  _ProjectId_k__BackingField;

/// @brief Field <StorageBucket>k__BackingField, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get__StorageBucket_k__BackingField, put=__cordl_internal_set__StorageBucket_k__BackingField)) ::StringW  _StorageBucket_k__BackingField;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method Dispose, addr 0x18f6cec, size 0x4, virtual true, abstract: false, final true
inline void Dispose() ;

static inline ::Firebase::AppOptions* New_ctor(::Firebase::AppOptionsInternal*  other) ;

constexpr ::StringW const& __cordl_internal_get__ApiKey_k__BackingField() const;

constexpr ::StringW& __cordl_internal_get__ApiKey_k__BackingField() ;

constexpr ::StringW const& __cordl_internal_get__AppId_k__BackingField() const;

constexpr ::StringW& __cordl_internal_get__AppId_k__BackingField() ;

constexpr ::System::Uri* const& __cordl_internal_get__DatabaseUrl_k__BackingField() const;

constexpr ::System::Uri*& __cordl_internal_get__DatabaseUrl_k__BackingField() ;

constexpr ::StringW const& __cordl_internal_get__MessageSenderId_k__BackingField() const;

constexpr ::StringW& __cordl_internal_get__MessageSenderId_k__BackingField() ;

constexpr ::StringW const& __cordl_internal_get__PackageName_k__BackingField() const;

constexpr ::StringW& __cordl_internal_get__PackageName_k__BackingField() ;

constexpr ::StringW const& __cordl_internal_get__ProjectId_k__BackingField() const;

constexpr ::StringW& __cordl_internal_get__ProjectId_k__BackingField() ;

constexpr ::StringW const& __cordl_internal_get__StorageBucket_k__BackingField() const;

constexpr ::StringW& __cordl_internal_get__StorageBucket_k__BackingField() ;

constexpr void __cordl_internal_set__ApiKey_k__BackingField(::StringW  value) ;

constexpr void __cordl_internal_set__AppId_k__BackingField(::StringW  value) ;

constexpr void __cordl_internal_set__DatabaseUrl_k__BackingField(::System::Uri*  value) ;

constexpr void __cordl_internal_set__MessageSenderId_k__BackingField(::StringW  value) ;

constexpr void __cordl_internal_set__PackageName_k__BackingField(::StringW  value) ;

constexpr void __cordl_internal_set__ProjectId_k__BackingField(::StringW  value) ;

constexpr void __cordl_internal_set__StorageBucket_k__BackingField(::StringW  value) ;

/// @brief Method .ctor, addr 0x18f38e8, size 0x80, virtual false, abstract: false, final false
inline void _ctor(::Firebase::AppOptionsInternal*  other) ;

/// @brief Method get_StorageBucket, addr 0x18f6d10, size 0x8, virtual false, abstract: false, final false
inline ::StringW get_StorageBucket() ;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

/// @brief Method set_ApiKey, addr 0x18f6d00, size 0x8, virtual false, abstract: false, final false
inline void set_ApiKey(::StringW  value) ;

/// @brief Method set_AppId, addr 0x18f6cf8, size 0x8, virtual false, abstract: false, final false
inline void set_AppId(::StringW  value) ;

/// @brief Method set_DatabaseUrl, addr 0x18f6cf0, size 0x8, virtual false, abstract: false, final false
inline void set_DatabaseUrl(::System::Uri*  value) ;

/// @brief Method set_MessageSenderId, addr 0x18f6d08, size 0x8, virtual false, abstract: false, final false
inline void set_MessageSenderId(::StringW  value) ;

/// @brief Method set_PackageName, addr 0x18f6d28, size 0x8, virtual false, abstract: false, final false
inline void set_PackageName(::StringW  value) ;

/// @brief Method set_ProjectId, addr 0x18f6d20, size 0x8, virtual false, abstract: false, final false
inline void set_ProjectId(::StringW  value) ;

/// @brief Method set_StorageBucket, addr 0x18f6d18, size 0x8, virtual false, abstract: false, final false
inline void set_StorageBucket(::StringW  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr AppOptions() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "AppOptions", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
AppOptions(AppOptions && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AppOptions", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
AppOptions(AppOptions const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11844};

/// @brief Field <DatabaseUrl>k__BackingField, offset: 0x10, size: 0x8, def value: None
 ::System::Uri*  ____DatabaseUrl_k__BackingField;

/// @brief Field <AppId>k__BackingField, offset: 0x18, size: 0x8, def value: None
 ::StringW  ____AppId_k__BackingField;

/// @brief Field <ApiKey>k__BackingField, offset: 0x20, size: 0x8, def value: None
 ::StringW  ____ApiKey_k__BackingField;

/// @brief Field <MessageSenderId>k__BackingField, offset: 0x28, size: 0x8, def value: None
 ::StringW  ____MessageSenderId_k__BackingField;

/// @brief Field <StorageBucket>k__BackingField, offset: 0x30, size: 0x8, def value: None
 ::StringW  ____StorageBucket_k__BackingField;

/// @brief Field <ProjectId>k__BackingField, offset: 0x38, size: 0x8, def value: None
 ::StringW  ____ProjectId_k__BackingField;

/// @brief Field <PackageName>k__BackingField, offset: 0x40, size: 0x8, def value: None
 ::StringW  ____PackageName_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Firebase::AppOptions, ____DatabaseUrl_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Firebase::AppOptions, ____AppId_k__BackingField) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Firebase::AppOptions, ____ApiKey_k__BackingField) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Firebase::AppOptions, ____MessageSenderId_k__BackingField) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Firebase::AppOptions, ____StorageBucket_k__BackingField) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Firebase::AppOptions, ____ProjectId_k__BackingField) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Firebase::AppOptions, ____PackageName_k__BackingField) == 0x40, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Firebase::AppOptions, 0x48>, "Size mismatch!");

} // namespace end def Firebase
NEED_NO_BOX(::Firebase::AppOptions);
DEFINE_IL2CPP_ARG_TYPE(::Firebase::AppOptions*, "Firebase", "AppOptions");
