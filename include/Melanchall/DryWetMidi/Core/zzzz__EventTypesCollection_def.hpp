#pragma once
// IWYU pragma private; include "Melanchall/DryWetMidi/Core/EventTypesCollection.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(EventTypesCollection)
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace System {
class Type;
}
// Forward declare root types
namespace Melanchall::DryWetMidi::Core {
class EventTypesCollection;
}
// Write type traits
MARK_REF_PTR_T(::Melanchall::DryWetMidi::Core::EventTypesCollection);
// Dependencies System.Object
namespace Melanchall::DryWetMidi::Core {
// Is value type: false
// CS Name: Melanchall.DryWetMidi.Core.EventTypesCollection
class CORDL_TYPE EventTypesCollection : public ::System::Object {
public:
// Declarations
/// @brief Field _statusBytes, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get__statusBytes, put=__cordl_internal_set__statusBytes)) ::System::Collections::Generic::Dictionary_2<::System::Type*,uint8_t>*  _statusBytes;

/// @brief Method TryGetStatusByte, addr 0x25a2404, size 0x68, virtual false, abstract: false, final false
inline bool TryGetStatusByte(::System::Type*  type, ::ByRef<uint8_t>  statusByte) ;

constexpr ::System::Collections::Generic::Dictionary_2<::System::Type*,uint8_t>* const& __cordl_internal_get__statusBytes() const;

constexpr ::System::Collections::Generic::Dictionary_2<::System::Type*,uint8_t>*& __cordl_internal_get__statusBytes() ;

constexpr void __cordl_internal_set__statusBytes(::System::Collections::Generic::Dictionary_2<::System::Type*,uint8_t>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr EventTypesCollection() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "EventTypesCollection", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
EventTypesCollection(EventTypesCollection && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "EventTypesCollection", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
EventTypesCollection(EventTypesCollection const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11635};

/// @brief Field _statusBytes, offset: 0x10, size: 0x8, def value: None
 ::System::Collections::Generic::Dictionary_2<::System::Type*,uint8_t>*  ____statusBytes;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Melanchall::DryWetMidi::Core::EventTypesCollection, ____statusBytes) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Melanchall::DryWetMidi::Core::EventTypesCollection, 0x18>, "Size mismatch!");

} // namespace end def Melanchall::DryWetMidi::Core
NEED_NO_BOX(::Melanchall::DryWetMidi::Core::EventTypesCollection);
DEFINE_IL2CPP_ARG_TYPE(::Melanchall::DryWetMidi::Core::EventTypesCollection*, "Melanchall.DryWetMidi.Core", "EventTypesCollection");
