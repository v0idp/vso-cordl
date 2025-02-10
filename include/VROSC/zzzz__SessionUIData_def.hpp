#pragma once
// IWYU pragma private; include "VROSC/SessionUIData.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__DateTime_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(SessionUIData)
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System {
struct DateTime;
}
namespace VROSC {
struct SessionUIData_Type;
}
namespace VROSC {
class Session;
}
// Forward declare root types
namespace VROSC {
struct SessionUIData_Type;
}
namespace VROSC {
class SessionUIData;
}
// Write type traits
MARK_VAL_T(::VROSC::SessionUIData_Type);
MARK_REF_PTR_T(::VROSC::SessionUIData);
// Dependencies 
namespace VROSC {
// Is value type: true
// CS Name: VROSC.SessionUIData/Type
struct CORDL_TYPE SessionUIData_Type {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __SessionUIData_Type_Unwrapped
enum struct __SessionUIData_Type_Unwrapped : int32_t {
__E_Local = static_cast<int32_t>(0x0),
__E_Cloud = static_cast<int32_t>(0x1),
__E_MyShare = static_cast<int32_t>(0x2),
__E_Community = static_cast<int32_t>(0x3),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __SessionUIData_Type_Unwrapped () const noexcept {
return static_cast<__SessionUIData_Type_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr SessionUIData_Type() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr SessionUIData_Type(int32_t  value__) noexcept;

/// @brief Field Cloud value: I32(1)
static ::VROSC::SessionUIData_Type const Cloud;

/// @brief Field Community value: I32(3)
static ::VROSC::SessionUIData_Type const Community;

/// @brief Field Local value: I32(0)
static ::VROSC::SessionUIData_Type const Local;

/// @brief Field MyShare value: I32(2)
static ::VROSC::SessionUIData_Type const MyShare;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{478};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::VROSC::SessionUIData_Type, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::SessionUIData_Type, 0x4>, "Size mismatch!");

} // namespace end def VROSC
// Dependencies System.DateTime, System.Object, VROSC.SessionUIData::Type
namespace VROSC {
// Is value type: false
// CS Name: VROSC.SessionUIData
class CORDL_TYPE SessionUIData : public ::System::Object {
public:
// Declarations
using Type = ::VROSC::SessionUIData_Type;

 __declspec(property(get=get_AuthorName, put=set_AuthorName)) ::StringW  AuthorName;

 __declspec(property(get=get_ContributorsNames, put=set_ContributorsNames)) ::System::Collections::Generic::List_1<::StringW>*  ContributorsNames;

 __declspec(property(get=get_Date, put=set_Date)) ::System::DateTime  Date;

 __declspec(property(get=get_Description, put=set_Description)) ::StringW  Description;

 __declspec(property(get=get_DisplayName, put=set_DisplayName)) ::StringW  DisplayName;

 __declspec(property(get=get_DownloadsCount, put=set_DownloadsCount)) int32_t  DownloadsCount;

 __declspec(property(get=get_FavoritesCount, put=set_FavoritesCount)) int32_t  FavoritesCount;

 __declspec(property(get=get_HasPositionalData, put=set_HasPositionalData)) bool  HasPositionalData;

 __declspec(property(get=get_HasPreview, put=set_HasPreview)) bool  HasPreview;

 __declspec(property(get=get_IsTemplateSession)) bool  IsTemplateSession;

 __declspec(property(get=get_Popularity, put=set_Popularity)) double_t  Popularity;

 __declspec(property(get=get_PreviewsCount, put=set_PreviewsCount)) int32_t  PreviewsCount;

 __declspec(property(get=get_SessionId, put=set_SessionId)) ::StringW  SessionId;

 __declspec(property(get=get_SessionType, put=set_SessionType)) ::VROSC::SessionUIData_Type  SessionType;

 __declspec(property(get=get_Tags, put=set_Tags)) ::System::Collections::Generic::List_1<::StringW>*  Tags;

 __declspec(property(get=get_UpVotesCount, put=set_UpVotesCount)) int32_t  UpVotesCount;

/// @brief Field <AuthorName>k__BackingField, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get__AuthorName_k__BackingField, put=__cordl_internal_set__AuthorName_k__BackingField)) ::StringW  _AuthorName_k__BackingField;

/// @brief Field <ContributorsNames>k__BackingField, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get__ContributorsNames_k__BackingField, put=__cordl_internal_set__ContributorsNames_k__BackingField)) ::System::Collections::Generic::List_1<::StringW>*  _ContributorsNames_k__BackingField;

/// @brief Field <Date>k__BackingField, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get__Date_k__BackingField, put=__cordl_internal_set__Date_k__BackingField)) ::System::DateTime  _Date_k__BackingField;

/// @brief Field <Description>k__BackingField, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__Description_k__BackingField, put=__cordl_internal_set__Description_k__BackingField)) ::StringW  _Description_k__BackingField;

/// @brief Field <DisplayName>k__BackingField, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__DisplayName_k__BackingField, put=__cordl_internal_set__DisplayName_k__BackingField)) ::StringW  _DisplayName_k__BackingField;

/// @brief Field <DownloadsCount>k__BackingField, offset 0x50, size 0x4 
 __declspec(property(get=__cordl_internal_get__DownloadsCount_k__BackingField, put=__cordl_internal_set__DownloadsCount_k__BackingField)) int32_t  _DownloadsCount_k__BackingField;

/// @brief Field <FavoritesCount>k__BackingField, offset 0x4c, size 0x4 
 __declspec(property(get=__cordl_internal_get__FavoritesCount_k__BackingField, put=__cordl_internal_set__FavoritesCount_k__BackingField)) int32_t  _FavoritesCount_k__BackingField;

/// @brief Field <HasPositionalData>k__BackingField, offset 0x65, size 0x1 
 __declspec(property(get=__cordl_internal_get__HasPositionalData_k__BackingField, put=__cordl_internal_set__HasPositionalData_k__BackingField)) bool  _HasPositionalData_k__BackingField;

/// @brief Field <HasPreview>k__BackingField, offset 0x64, size 0x1 
 __declspec(property(get=__cordl_internal_get__HasPreview_k__BackingField, put=__cordl_internal_set__HasPreview_k__BackingField)) bool  _HasPreview_k__BackingField;

/// @brief Field <Popularity>k__BackingField, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get__Popularity_k__BackingField, put=__cordl_internal_set__Popularity_k__BackingField)) double_t  _Popularity_k__BackingField;

/// @brief Field <PreviewsCount>k__BackingField, offset 0x54, size 0x4 
 __declspec(property(get=__cordl_internal_get__PreviewsCount_k__BackingField, put=__cordl_internal_set__PreviewsCount_k__BackingField)) int32_t  _PreviewsCount_k__BackingField;

/// @brief Field <SessionId>k__BackingField, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get__SessionId_k__BackingField, put=__cordl_internal_set__SessionId_k__BackingField)) ::StringW  _SessionId_k__BackingField;

/// @brief Field <SessionType>k__BackingField, offset 0x60, size 0x4 
 __declspec(property(get=__cordl_internal_get__SessionType_k__BackingField, put=__cordl_internal_set__SessionType_k__BackingField)) ::VROSC::SessionUIData_Type  _SessionType_k__BackingField;

/// @brief Field <Tags>k__BackingField, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get__Tags_k__BackingField, put=__cordl_internal_set__Tags_k__BackingField)) ::System::Collections::Generic::List_1<::StringW>*  _Tags_k__BackingField;

/// @brief Field <UpVotesCount>k__BackingField, offset 0x48, size 0x4 
 __declspec(property(get=__cordl_internal_get__UpVotesCount_k__BackingField, put=__cordl_internal_set__UpVotesCount_k__BackingField)) int32_t  _UpVotesCount_k__BackingField;

static inline ::VROSC::SessionUIData* New_ctor(::VROSC::Session*  session, bool  isCloudSave, bool  isMySharedSave, bool  isCommunitySave) ;

constexpr ::StringW const& __cordl_internal_get__AuthorName_k__BackingField() const;

constexpr ::StringW& __cordl_internal_get__AuthorName_k__BackingField() ;

constexpr ::System::Collections::Generic::List_1<::StringW>* const& __cordl_internal_get__ContributorsNames_k__BackingField() const;

constexpr ::System::Collections::Generic::List_1<::StringW>*& __cordl_internal_get__ContributorsNames_k__BackingField() ;

constexpr ::System::DateTime const& __cordl_internal_get__Date_k__BackingField() const;

constexpr ::System::DateTime& __cordl_internal_get__Date_k__BackingField() ;

constexpr ::StringW const& __cordl_internal_get__Description_k__BackingField() const;

constexpr ::StringW& __cordl_internal_get__Description_k__BackingField() ;

constexpr ::StringW const& __cordl_internal_get__DisplayName_k__BackingField() const;

constexpr ::StringW& __cordl_internal_get__DisplayName_k__BackingField() ;

constexpr int32_t const& __cordl_internal_get__DownloadsCount_k__BackingField() const;

constexpr int32_t& __cordl_internal_get__DownloadsCount_k__BackingField() ;

constexpr int32_t const& __cordl_internal_get__FavoritesCount_k__BackingField() const;

constexpr int32_t& __cordl_internal_get__FavoritesCount_k__BackingField() ;

constexpr bool const& __cordl_internal_get__HasPositionalData_k__BackingField() const;

constexpr bool& __cordl_internal_get__HasPositionalData_k__BackingField() ;

constexpr bool const& __cordl_internal_get__HasPreview_k__BackingField() const;

constexpr bool& __cordl_internal_get__HasPreview_k__BackingField() ;

constexpr double_t const& __cordl_internal_get__Popularity_k__BackingField() const;

constexpr double_t& __cordl_internal_get__Popularity_k__BackingField() ;

constexpr int32_t const& __cordl_internal_get__PreviewsCount_k__BackingField() const;

constexpr int32_t& __cordl_internal_get__PreviewsCount_k__BackingField() ;

constexpr ::StringW const& __cordl_internal_get__SessionId_k__BackingField() const;

constexpr ::StringW& __cordl_internal_get__SessionId_k__BackingField() ;

constexpr ::VROSC::SessionUIData_Type const& __cordl_internal_get__SessionType_k__BackingField() const;

constexpr ::VROSC::SessionUIData_Type& __cordl_internal_get__SessionType_k__BackingField() ;

constexpr ::System::Collections::Generic::List_1<::StringW>* const& __cordl_internal_get__Tags_k__BackingField() const;

constexpr ::System::Collections::Generic::List_1<::StringW>*& __cordl_internal_get__Tags_k__BackingField() ;

constexpr int32_t const& __cordl_internal_get__UpVotesCount_k__BackingField() const;

constexpr int32_t& __cordl_internal_get__UpVotesCount_k__BackingField() ;

constexpr void __cordl_internal_set__AuthorName_k__BackingField(::StringW  value) ;

constexpr void __cordl_internal_set__ContributorsNames_k__BackingField(::System::Collections::Generic::List_1<::StringW>*  value) ;

constexpr void __cordl_internal_set__Date_k__BackingField(::System::DateTime  value) ;

constexpr void __cordl_internal_set__Description_k__BackingField(::StringW  value) ;

constexpr void __cordl_internal_set__DisplayName_k__BackingField(::StringW  value) ;

constexpr void __cordl_internal_set__DownloadsCount_k__BackingField(int32_t  value) ;

constexpr void __cordl_internal_set__FavoritesCount_k__BackingField(int32_t  value) ;

constexpr void __cordl_internal_set__HasPositionalData_k__BackingField(bool  value) ;

constexpr void __cordl_internal_set__HasPreview_k__BackingField(bool  value) ;

constexpr void __cordl_internal_set__Popularity_k__BackingField(double_t  value) ;

constexpr void __cordl_internal_set__PreviewsCount_k__BackingField(int32_t  value) ;

constexpr void __cordl_internal_set__SessionId_k__BackingField(::StringW  value) ;

constexpr void __cordl_internal_set__SessionType_k__BackingField(::VROSC::SessionUIData_Type  value) ;

constexpr void __cordl_internal_set__Tags_k__BackingField(::System::Collections::Generic::List_1<::StringW>*  value) ;

constexpr void __cordl_internal_set__UpVotesCount_k__BackingField(int32_t  value) ;

/// @brief Method .ctor, addr 0x18588d4, size 0x30c, virtual false, abstract: false, final false
inline void _ctor(::VROSC::Session*  session, bool  isCloudSave, bool  isMySharedSave, bool  isCommunitySave) ;

/// @brief Method get_AuthorName, addr 0x185b0a0, size 0x8, virtual false, abstract: false, final false
inline ::StringW get_AuthorName() ;

/// @brief Method get_ContributorsNames, addr 0x185b0b0, size 0x8, virtual false, abstract: false, final false
inline ::System::Collections::Generic::List_1<::StringW>* get_ContributorsNames() ;

/// @brief Method get_Date, addr 0x185b070, size 0x8, virtual false, abstract: false, final false
inline ::System::DateTime get_Date() ;

/// @brief Method get_Description, addr 0x185b090, size 0x8, virtual false, abstract: false, final false
inline ::StringW get_Description() ;

/// @brief Method get_DisplayName, addr 0x185b080, size 0x8, virtual false, abstract: false, final false
inline ::StringW get_DisplayName() ;

/// @brief Method get_DownloadsCount, addr 0x185b0f0, size 0x8, virtual false, abstract: false, final false
inline int32_t get_DownloadsCount() ;

/// @brief Method get_FavoritesCount, addr 0x185b0e0, size 0x8, virtual false, abstract: false, final false
inline int32_t get_FavoritesCount() ;

/// @brief Method get_HasPositionalData, addr 0x185b144, size 0x8, virtual false, abstract: false, final false
inline bool get_HasPositionalData() ;

/// @brief Method get_HasPreview, addr 0x185b130, size 0x8, virtual false, abstract: false, final false
inline bool get_HasPreview() ;

/// @brief Method get_IsTemplateSession, addr 0x185b158, size 0x60, virtual false, abstract: false, final false
inline bool get_IsTemplateSession() ;

/// @brief Method get_Popularity, addr 0x185b110, size 0x8, virtual false, abstract: false, final false
inline double_t get_Popularity() ;

/// @brief Method get_PreviewsCount, addr 0x185b100, size 0x8, virtual false, abstract: false, final false
inline int32_t get_PreviewsCount() ;

/// @brief Method get_SessionId, addr 0x185b060, size 0x8, virtual false, abstract: false, final false
inline ::StringW get_SessionId() ;

/// @brief Method get_SessionType, addr 0x185b120, size 0x8, virtual false, abstract: false, final false
inline ::VROSC::SessionUIData_Type get_SessionType() ;

/// @brief Method get_Tags, addr 0x185b0c0, size 0x8, virtual false, abstract: false, final false
inline ::System::Collections::Generic::List_1<::StringW>* get_Tags() ;

/// @brief Method get_UpVotesCount, addr 0x185b0d0, size 0x8, virtual false, abstract: false, final false
inline int32_t get_UpVotesCount() ;

/// @brief Method set_AuthorName, addr 0x185b0a8, size 0x8, virtual false, abstract: false, final false
inline void set_AuthorName(::StringW  value) ;

/// @brief Method set_ContributorsNames, addr 0x185b0b8, size 0x8, virtual false, abstract: false, final false
inline void set_ContributorsNames(::System::Collections::Generic::List_1<::StringW>*  value) ;

/// @brief Method set_Date, addr 0x185b078, size 0x8, virtual false, abstract: false, final false
inline void set_Date(::System::DateTime  value) ;

/// @brief Method set_Description, addr 0x185b098, size 0x8, virtual false, abstract: false, final false
inline void set_Description(::StringW  value) ;

/// @brief Method set_DisplayName, addr 0x185b088, size 0x8, virtual false, abstract: false, final false
inline void set_DisplayName(::StringW  value) ;

/// @brief Method set_DownloadsCount, addr 0x185b0f8, size 0x8, virtual false, abstract: false, final false
inline void set_DownloadsCount(int32_t  value) ;

/// @brief Method set_FavoritesCount, addr 0x185b0e8, size 0x8, virtual false, abstract: false, final false
inline void set_FavoritesCount(int32_t  value) ;

/// @brief Method set_HasPositionalData, addr 0x185b14c, size 0xc, virtual false, abstract: false, final false
inline void set_HasPositionalData(bool  value) ;

/// @brief Method set_HasPreview, addr 0x185b138, size 0xc, virtual false, abstract: false, final false
inline void set_HasPreview(bool  value) ;

/// @brief Method set_Popularity, addr 0x185b118, size 0x8, virtual false, abstract: false, final false
inline void set_Popularity(double_t  value) ;

/// @brief Method set_PreviewsCount, addr 0x185b108, size 0x8, virtual false, abstract: false, final false
inline void set_PreviewsCount(int32_t  value) ;

/// @brief Method set_SessionId, addr 0x185b068, size 0x8, virtual false, abstract: false, final false
inline void set_SessionId(::StringW  value) ;

/// @brief Method set_SessionType, addr 0x185b128, size 0x8, virtual false, abstract: false, final false
inline void set_SessionType(::VROSC::SessionUIData_Type  value) ;

/// @brief Method set_Tags, addr 0x185b0c8, size 0x8, virtual false, abstract: false, final false
inline void set_Tags(::System::Collections::Generic::List_1<::StringW>*  value) ;

/// @brief Method set_UpVotesCount, addr 0x185b0d8, size 0x8, virtual false, abstract: false, final false
inline void set_UpVotesCount(int32_t  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SessionUIData() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SessionUIData", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
SessionUIData(SessionUIData && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SessionUIData", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
SessionUIData(SessionUIData const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{479};

/// @brief Field <SessionId>k__BackingField, offset: 0x10, size: 0x8, def value: None
 ::StringW  ____SessionId_k__BackingField;

/// @brief Field <Date>k__BackingField, offset: 0x18, size: 0x8, def value: None
 ::System::DateTime  ____Date_k__BackingField;

/// @brief Field <DisplayName>k__BackingField, offset: 0x20, size: 0x8, def value: None
 ::StringW  ____DisplayName_k__BackingField;

/// @brief Field <Description>k__BackingField, offset: 0x28, size: 0x8, def value: None
 ::StringW  ____Description_k__BackingField;

/// @brief Field <AuthorName>k__BackingField, offset: 0x30, size: 0x8, def value: None
 ::StringW  ____AuthorName_k__BackingField;

/// @brief Field <ContributorsNames>k__BackingField, offset: 0x38, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::StringW>*  ____ContributorsNames_k__BackingField;

/// @brief Field <Tags>k__BackingField, offset: 0x40, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::StringW>*  ____Tags_k__BackingField;

/// @brief Field <UpVotesCount>k__BackingField, offset: 0x48, size: 0x4, def value: None
 int32_t  ____UpVotesCount_k__BackingField;

/// @brief Field <FavoritesCount>k__BackingField, offset: 0x4c, size: 0x4, def value: None
 int32_t  ____FavoritesCount_k__BackingField;

/// @brief Field <DownloadsCount>k__BackingField, offset: 0x50, size: 0x4, def value: None
 int32_t  ____DownloadsCount_k__BackingField;

/// @brief Field <PreviewsCount>k__BackingField, offset: 0x54, size: 0x4, def value: None
 int32_t  ____PreviewsCount_k__BackingField;

/// @brief Field <Popularity>k__BackingField, offset: 0x58, size: 0x8, def value: None
 double_t  ____Popularity_k__BackingField;

/// @brief Field <SessionType>k__BackingField, offset: 0x60, size: 0x4, def value: None
 ::VROSC::SessionUIData_Type  ____SessionType_k__BackingField;

/// @brief Field <HasPreview>k__BackingField, offset: 0x64, size: 0x1, def value: None
 bool  ____HasPreview_k__BackingField;

/// @brief Field <HasPositionalData>k__BackingField, offset: 0x65, size: 0x1, def value: None
 bool  ____HasPositionalData_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::VROSC::SessionUIData, ____SessionId_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(offsetof(::VROSC::SessionUIData, ____Date_k__BackingField) == 0x18, "Offset mismatch!");

static_assert(offsetof(::VROSC::SessionUIData, ____DisplayName_k__BackingField) == 0x20, "Offset mismatch!");

static_assert(offsetof(::VROSC::SessionUIData, ____Description_k__BackingField) == 0x28, "Offset mismatch!");

static_assert(offsetof(::VROSC::SessionUIData, ____AuthorName_k__BackingField) == 0x30, "Offset mismatch!");

static_assert(offsetof(::VROSC::SessionUIData, ____ContributorsNames_k__BackingField) == 0x38, "Offset mismatch!");

static_assert(offsetof(::VROSC::SessionUIData, ____Tags_k__BackingField) == 0x40, "Offset mismatch!");

static_assert(offsetof(::VROSC::SessionUIData, ____UpVotesCount_k__BackingField) == 0x48, "Offset mismatch!");

static_assert(offsetof(::VROSC::SessionUIData, ____FavoritesCount_k__BackingField) == 0x4c, "Offset mismatch!");

static_assert(offsetof(::VROSC::SessionUIData, ____DownloadsCount_k__BackingField) == 0x50, "Offset mismatch!");

static_assert(offsetof(::VROSC::SessionUIData, ____PreviewsCount_k__BackingField) == 0x54, "Offset mismatch!");

static_assert(offsetof(::VROSC::SessionUIData, ____Popularity_k__BackingField) == 0x58, "Offset mismatch!");

static_assert(offsetof(::VROSC::SessionUIData, ____SessionType_k__BackingField) == 0x60, "Offset mismatch!");

static_assert(offsetof(::VROSC::SessionUIData, ____HasPreview_k__BackingField) == 0x64, "Offset mismatch!");

static_assert(offsetof(::VROSC::SessionUIData, ____HasPositionalData_k__BackingField) == 0x65, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::SessionUIData, 0x68>, "Size mismatch!");

} // namespace end def VROSC
DEFINE_IL2CPP_ARG_TYPE(::VROSC::SessionUIData_Type, "VROSC", "SessionUIData/Type");
NEED_NO_BOX(::VROSC::SessionUIData);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::SessionUIData*, "VROSC", "SessionUIData");
