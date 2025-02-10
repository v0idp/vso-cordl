#pragma once
// IWYU pragma private; include "System/UriTypeConverter.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/ComponentModel/zzzz__TypeConverter_def.hpp"
CORDL_MODULE_EXPORT(UriTypeConverter)
namespace System::ComponentModel {
class ITypeDescriptorContext;
}
namespace System::Globalization {
class CultureInfo;
}
namespace System {
class Object;
}
namespace System {
class Type;
}
// Forward declare root types
namespace System {
class UriTypeConverter;
}
// Write type traits
MARK_REF_PTR_T(::System::UriTypeConverter);
// Dependencies System.ComponentModel.TypeConverter
namespace System {
// Is value type: false
// CS Name: System.UriTypeConverter
class CORDL_TYPE UriTypeConverter : public ::System::ComponentModel::TypeConverter {
public:
// Declarations
/// @brief Method CanConvert, addr 0x2cdedac, size 0xe4, virtual false, abstract: false, final false
inline bool CanConvert(::System::Type*  type) ;

/// @brief Method CanConvertFrom, addr 0x2cdee90, size 0xb0, virtual true, abstract: false, final false
inline bool CanConvertFrom(::System::ComponentModel::ITypeDescriptorContext*  context, ::System::Type*  sourceType) ;

/// @brief Method CanConvertTo, addr 0x2cdef40, size 0x78, virtual true, abstract: false, final false
inline bool CanConvertTo(::System::ComponentModel::ITypeDescriptorContext*  context, ::System::Type*  destinationType) ;

/// @brief Method ConvertFrom, addr 0x2cdefb8, size 0x19c, virtual true, abstract: false, final false
inline ::System::Object* ConvertFrom(::System::ComponentModel::ITypeDescriptorContext*  context, ::System::Globalization::CultureInfo*  culture, ::System::Object*  value) ;

/// @brief Method ConvertTo, addr 0x2cdf154, size 0x1e4, virtual true, abstract: false, final false
inline ::System::Object* ConvertTo(::System::ComponentModel::ITypeDescriptorContext*  context, ::System::Globalization::CultureInfo*  culture, ::System::Object*  value, ::System::Type*  destinationType) ;

static inline ::System::UriTypeConverter* New_ctor() ;

/// @brief Method .ctor, addr 0x2cdeda4, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr UriTypeConverter() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "UriTypeConverter", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
UriTypeConverter(UriTypeConverter && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "UriTypeConverter", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
UriTypeConverter(UriTypeConverter const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{7465};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::UriTypeConverter, 0x10>, "Size mismatch!");

} // namespace end def System
NEED_NO_BOX(::System::UriTypeConverter);
DEFINE_IL2CPP_ARG_TYPE(::System::UriTypeConverter*, "System", "UriTypeConverter");
