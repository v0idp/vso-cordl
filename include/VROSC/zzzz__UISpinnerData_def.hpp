#pragma once
// IWYU pragma private; include "VROSC/UISpinnerData.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(UISpinnerData)
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
// Forward declare root types
namespace VROSC {
class UISpinnerData;
}
// Write type traits
MARK_REF_PTR_T(::VROSC::UISpinnerData);
// Dependencies System.Object
namespace VROSC {
// Is value type: false
// CS Name: VROSC.UISpinnerData
class CORDL_TYPE UISpinnerData : public ::System::Object {
public:
// Declarations
 __declspec(property(get=get_Header)) ::StringW  Header;

 __declspec(property(get=get_Values)) ::System::Collections::Generic::List_1<::StringW>*  Values;

/// @brief Field _header, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get__header, put=__cordl_internal_set__header)) ::StringW  _header;

/// @brief Field _values, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get__values, put=__cordl_internal_set__values)) ::System::Collections::Generic::List_1<::StringW>*  _values;

static inline ::VROSC::UISpinnerData* New_ctor() ;

/// @brief Method Set, addr 0x17718e0, size 0x8, virtual false, abstract: false, final false
inline void Set(::StringW  header, ::System::Collections::Generic::List_1<::StringW>*  values) ;

constexpr ::StringW const& __cordl_internal_get__header() const;

constexpr ::StringW& __cordl_internal_get__header() ;

constexpr ::System::Collections::Generic::List_1<::StringW>* const& __cordl_internal_get__values() const;

constexpr ::System::Collections::Generic::List_1<::StringW>*& __cordl_internal_get__values() ;

constexpr void __cordl_internal_set__header(::StringW  value) ;

constexpr void __cordl_internal_set__values(::System::Collections::Generic::List_1<::StringW>*  value) ;

/// @brief Method .ctor, addr 0x17718e8, size 0x7c, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_Header, addr 0x17718d0, size 0x8, virtual false, abstract: false, final false
inline ::StringW get_Header() ;

/// @brief Method get_Values, addr 0x17718d8, size 0x8, virtual false, abstract: false, final false
inline ::System::Collections::Generic::List_1<::StringW>* get_Values() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr UISpinnerData() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "UISpinnerData", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
UISpinnerData(UISpinnerData && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "UISpinnerData", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
UISpinnerData(UISpinnerData const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1250};

/// @brief Field _header, offset: 0x10, size: 0x8, def value: None
 ::StringW  ____header;

/// @brief Field _values, offset: 0x18, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::StringW>*  ____values;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::VROSC::UISpinnerData, ____header) == 0x10, "Offset mismatch!");

static_assert(offsetof(::VROSC::UISpinnerData, ____values) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::UISpinnerData, 0x20>, "Size mismatch!");

} // namespace end def VROSC
NEED_NO_BOX(::VROSC::UISpinnerData);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::UISpinnerData*, "VROSC", "UISpinnerData");
