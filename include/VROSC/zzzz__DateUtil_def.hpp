#pragma once
// IWYU pragma private; include "VROSC/DateUtil.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(DateUtil)
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System {
struct DateTime;
}
// Forward declare root types
namespace VROSC {
class DateUtil;
}
// Write type traits
MARK_REF_PTR_T(::VROSC::DateUtil);
// Dependencies System.Object
namespace VROSC {
// Is value type: false
// CS Name: VROSC.DateUtil
class CORDL_TYPE DateUtil : public ::System::Object {
public:
// Declarations
/// @brief Field _dateFormats, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF__dateFormats, put=setStaticF__dateFormats)) ::System::Collections::Generic::List_1<::StringW>*  _dateFormats;

/// @brief Field _defaultDateFormat, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF__defaultDateFormat, put=setStaticF__defaultDateFormat)) ::StringW  _defaultDateFormat;

/// @brief Field _filepathDateFormat, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF__filepathDateFormat, put=setStaticF__filepathDateFormat)) ::StringW  _filepathDateFormat;

/// @brief Field _sessionIdDateFormat, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF__sessionIdDateFormat, put=setStaticF__sessionIdDateFormat)) ::StringW  _sessionIdDateFormat;

/// @brief Method ConvertOldDateString, addr 0x179c500, size 0x1d8, virtual false, abstract: false, final false
static inline ::StringW ConvertOldDateString(::StringW  date) ;

/// @brief Method FormatDateForDisplay, addr 0x179c2dc, size 0x5c, virtual false, abstract: false, final false
static inline ::StringW FormatDateForDisplay(::System::DateTime  date) ;

/// @brief Method GetDate, addr 0x179bf78, size 0x50, virtual false, abstract: false, final false
static inline ::System::DateTime GetDate() ;

/// @brief Method GetDateForFilePath, addr 0x179c338, size 0x98, virtual false, abstract: false, final false
static inline ::StringW GetDateForFilePath() ;

/// @brief Method GetDateForLocalSessionId, addr 0x179c3d0, size 0x98, virtual false, abstract: false, final false
static inline ::StringW GetDateForLocalSessionId() ;

/// @brief Method GetDateForLogs, addr 0x179c468, size 0x98, virtual false, abstract: false, final false
static inline ::StringW GetDateForLogs() ;

/// @brief Method GetEpochTime, addr 0x179be68, size 0xc0, virtual false, abstract: false, final false
static inline ::StringW GetEpochTime() ;

/// @brief Method GetSyncedDate, addr 0x179bf28, size 0x50, virtual false, abstract: false, final false
static inline ::System::DateTime GetSyncedDate() ;

/// @brief Method GetSyncedDateString, addr 0x179bfc8, size 0x98, virtual false, abstract: false, final false
static inline ::StringW GetSyncedDateString() ;

/// @brief Method ParseDate, addr 0x179c060, size 0x27c, virtual false, abstract: false, final false
static inline ::System::DateTime ParseDate(::StringW  date) ;

static inline ::System::Collections::Generic::List_1<::StringW>* getStaticF__dateFormats() ;

static inline ::StringW getStaticF__defaultDateFormat() ;

static inline ::StringW getStaticF__filepathDateFormat() ;

static inline ::StringW getStaticF__sessionIdDateFormat() ;

static inline void setStaticF__dateFormats(::System::Collections::Generic::List_1<::StringW>*  value) ;

static inline void setStaticF__defaultDateFormat(::StringW  value) ;

static inline void setStaticF__filepathDateFormat(::StringW  value) ;

static inline void setStaticF__sessionIdDateFormat(::StringW  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr DateUtil() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "DateUtil", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
DateUtil(DateUtil && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "DateUtil", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
DateUtil(DateUtil const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1360};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::VROSC::DateUtil, 0x10>, "Size mismatch!");

} // namespace end def VROSC
NEED_NO_BOX(::VROSC::DateUtil);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::DateUtil*, "VROSC", "DateUtil");
