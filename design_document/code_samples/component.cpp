struct Component
{
    ////////////////////////////////////////////////////////////
    /// \brief Used to uniquely identify the entity that 
    ///        this component belongs to.
    ///        All components belonging to the same entity,
    ///        shares the same ID.
    ////////////////////////////////////////////////////////////
    EntityId entityId;
};
